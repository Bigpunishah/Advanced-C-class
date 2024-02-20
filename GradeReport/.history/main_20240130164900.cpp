#include <iostream>
#include <fstream>
#include <string>
#include "studentType.h"

const int MAX_NO_OF_STUDENTS = 10;

void getStudentData(std::ifstream& inFile, studentType studentList[], int numberOfStudents);

void printGradeReports(std::ofstream& outFile, studentType studentList[], int numberOfStudents, double tuitionRate);

int main(){
    studentType studentList[MAX_NO_OF_STUDENTS];

    int noOfStudents;
    double tuitionRate;

    std::ifstream inFile;
    std::ofstream outFile;

    inFile.open("stData.txt");

    if(!inFile){
        std::cout<<"The input file does not exist. Program terminates.\n";
        return 1;
    }    

    outFile.open("stData.txt");

    inFile >> noOfStudents; // get No of students
    inFile >> tuitionRate; // get tuition rate

    getStudentData(inFile, studentList, noOfStudents);

    printGradeReports(outFile, studentList, noOfStudents, tuitionRate);
    
    return 0;
}


//Def getStudentData
void getStudentData(std::ifstream& inFile, studentType studentList[], int numberOfStudents){

    std::string fName;
    std::string lName;
    int ID;
    int nOfCourses;
    char isPaid;

    bool isTuitionPaid;

    std::string cName;
    std::string cNo;
    int credits;

    courseType courses[6];

    char cGrades[6];

    for(int count = 0; count < numberOfStudents; count++){
        inFile >> fName >> lName >> ID >> isPaid;

        if(isPaid == 'Y'){
            isTuitionPaid = true;
        } else {
            isTuitionPaid = false;
        }

        inFile >> nOfCourses;

        for(int i  = 0; i < nOfCourses; i++){
            inFile >> cName >> cNo >> credits >> cGrades[i];
            courses[i].setCourseInfo(cName, cNo, credits);
        }

        studentList[count].setInfo(fName, lName, ID, nOfCourses, isTuitionPaid, courses, cGrades);

    }

}