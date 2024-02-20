#include <iostream>
#include <fstream>
#include <string>
#include "studentType.h"

const int MAX_NO_OF_STUDENTS = 10;

void getStudentData(std::ifstream& inFile, studentType studentList[], int numberOfStudents);

void printGradeReports(std::ofstream& outFile, studentType studentList[], int numberOfStudents, double tuitionRate);

int main(){



    return 0;
}