#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

#include <iostream>
#include "personType.h"
#include "courseType.h"


//This is inheritence in C++
class studentType: public personType{
private:
    int sId;
    int numberOfCourses;
    bool isTuitionPaid;
    courseType courseEnrolled[6];
    char courseGrade[6];
    //double tuitionRate;
    

    //private helper function
    void sortCourses();

public:
    void setInfo(std::string, std::string, int, int, bool, courseType [], char []);
    void print(std::ostream&, double); //missing ostream&
    int getHoursEnrolled();
    double getGpa();
    double billingAmount( double);

    studentType();
};

#endif