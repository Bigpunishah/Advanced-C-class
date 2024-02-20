#include <iostream>
#include <iomanip>
#include "courseType.h"
#include <fstream>
#include <string>

//set course information
void courseType::setCourseInfo(std::string cName, std::string cNo, int credits){
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

//constructor with parameters
courseType::courseType(std::string cName, std::string cNo, int credits){
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

//getter for credits
int courseType::getCredits(){
    return courseCredits;
}

//getter cor course no
std::string courseType::getCourseNumber(){
    return courseNo;
}

//getter course name
std::string courseType::getCourseName(){
    return courseName;
}


//prints course info with the file
void courseType::print(std::ostream& outF){
    //std::left - align left
    //std::right - align right
    //std::setw(int n) - set space based on width (n)
    outF << std::left;
    outF << std::setw(8) << courseNo << "    ";
    outF << std::setw(15) << courseName;
    outF << std::right;
    outF << std::setw(3) << courseCredits << "    ";
}

