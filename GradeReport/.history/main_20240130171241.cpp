#include <iostream>
#include <fstream>
#include <string>
#include "studentType.h"


//const max number of students allowed
const int MAX_NO_OF_STUDENTS = 10;

//prototype
void getStudentData(std::ifstream& inFile, studentType studentList[], int numberOfStudents);

//prototype
void printGradeReports(std::ofstream& outFile, studentType studentList[], int numberOfStudents, double tuitionRate);

int main(){
    studentType studentList[MAX_NO_OF_STUDENTS]; //setting max number

    int noOfStudents;
    double tuitionRate;

    std::ifstream inFile;
    std::ofstream outFile;

    //open the srudent data file
    inFile.open("stData.txt");

    //if file does not exits terminate
    if(!inFile){
        std::cout<<"The input file does not exist. Program terminates.\n";
        return 1;
    }    

    //else...
    //open a new file for the output data
    outFile.open("stDataOut.txt");

    //read the number of students & tuition rate
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
    char cGrades[6]; //this is only defined here

    for(int count = 0; count < numberOfStudents; count++){
        inFile >> fName >> lName >> ID >> isPaid; //getting all student data

        if(isPaid == 'Y'){
            isTuitionPaid = true;
        } else {
            isTuitionPaid = false;
        }

        inFile >> nOfCourses; //get no of courses

        //now looping to get all students courses
        for(int i  = 0; i < nOfCourses; i++){
            //read - course name, course num, credits, course grade[at this index]
            inFile >> cName >> cNo >> credits >> cGrades[i];

            //set each course values at this particular index before looping again
            courses[i].setCourseInfo(cName, cNo, credits);
        }

        studentList[count].setInfo(fName, lName, ID, nOfCourses, isTuitionPaid, courses, cGrades);

    }

}


void printGradeReports(std::ofstream& outFile, studentType studentList[], int noOfStudents, double tuitionRate){
    for(int count = 0; count < noOfStudents; count++){
        studentList[count].print(outFile, tuitionRate);
    }
}