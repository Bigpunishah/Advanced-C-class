#include <iostream>
#include <iomanip>
#include "courseType.h"


void courseType::setCourseInfo(std::string cName, std::string cNo, int credits){
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

courseType::courseType(std::string cName, std::string cNo, int credits){
    courseName = cName;
    courseNo = cNo;
    courseCredits = credits;
}

int courseType::getCredits(){
    return courseCredits;
}

std::string courseType::getCourseNumber(){
    return courseNo;
}

std::string courseType::getCourseName(){
    return courseName;
}


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

