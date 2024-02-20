#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "personType.h"
#include "courseType.h"
#include "studentType.h"


void studentType::setInfo(std::string fName, std::string lName, int ID, int nOfCourses, bool isTPaid, courseType courses[], char cGrades[]){
    setName(fName, lName);

    sId = ID;
    isTuitionPaid = isTPaid;
    numberOfCourses = nOfCourses;

    for(int i = 0; i < numberOfCourses; i++){
        courseEnrolled[i] = courses[i];
        courseGrade[i] = cGrades[i];
    }

    sortCourses();
}



studentType::studentType(){
    numberOfCourses = 0;
    sId = 0;
    isTuitionPaid = false;

    for(int i = 0; i < 6; i++){
        courseGrade[i] = '*';
    }
}


int studentType::getHoursEnrolled(){
    int totalCredits = 0;

    for(int i = 0; i < numberOfCourses; i++){
        totalCredits += courseEnrolled[i].getCredits();

        return totalCredits;
    }
    return 0;
}

void studentType::print(std::ostream& outF, double tuitionRate){

    outF << "Student Name: " << getFirstName() << " " << getLastName() << std::endl;

    outF << "Student ID: " << sId << std::endl;

    outF << "Number of courses endrolled: " << numberOfCourses << std::endl;
    outF << std::endl;

    outF << std::left;
    outF << "Course No" << std::setw(15) << "  Course Name" << std::setw(8) << "Credits"
            << std::setw(6) << "Grade" << std::endl;

    outF << std::right;

    for(int i = 0; i < numberOfCourses; i++){
        courseEnrolled[i].print(outF);

        if(isTuitionPaid){
            outF << std::setw(4) << courseGrade[i] << std::endl;
        } else {
            outF << std::setw(4) << "***" << std::endl;
        }
    }

    outF << std::endl;

    outF << "Total number of credit hours: " << getHoursEnrolled() << std::endl;

    outF << std::fixed << std::showpoint << std::setprecision(2);

    if(isTuitionPaid){
        outF << "Mid-Semester GPA: " << getGpa() << std::endl;
    } else {
        outF << "*** Grades are being held for not paying the tuition ***" << std::endl;

        outF << "Amount Due: $" << billingAmount(tuitionRate) << std::endl;
    }

    outF << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << std::endl;
}//End of print



double studentType::billingAmount(double tuitionRate){
    return tuitionRate * getHoursEnrolled();
}

double studentType::getGpa(){
    double sum = 0.0;

    for(int i = 0; i < numberOfCourses; i++){
        switch (courseGrade[i])
        {
        case 'A':
            sum += courseEnrolled[i].getCredits();
            break;

        case 'B':
            sum += courseEnrolled[i].getCredits();
            break;
    
        case 'C':
            sum += courseEnrolled[i].getCredits();
            break;

        case 'D':
            sum += courseEnrolled[i].getCredits();
            break;

        case 'F':
            sum += courseEnrolled[i].getCredits();
            break;
        
        default:
            std::cout<<"Invalid Course Grade." << std::endl;
            break;
        }
    }
    return sum / getHoursEnrolled();
}//End getGpa


void studentType::sortCourses(){
    int minIndex;
    courseType temp;
    char tempGrade;
    std::string course1;
    std::string course2;

    for(int i = 0; i < numberOfCourses - 1; i++){
        minIndex = 1;

        for(int j = 1 + 1; j < numberOfCourses; j++){
            course1 = courseEnrolled[minIndex].getCourseNumber();
            course2 = courseEnrolled[j].getCourseNumber();

            if(course1 > course2){
                minIndex = j;
            } // end if
        }//end for nested

        temp = courseEnrolled[minIndex];
        courseEnrolled[minIndex] = courseEnrolled[i];
        courseEnrolled[i] = temp;

        tempGrade = courseGrade[minIndex];
        courseGrade[minIndex] = courseGrade[i];
        courseGrade[i] = tempGrade;
    }//end for
}//end sort courses