#ifndef COURSETYPE_H
#define COURSETYPE_H
#include <string>

class courseType{
private:
    std::string courseName;
    std::string courseNo;
    int courseCredits;    

public:
    void setCourseInfo(std::string, std::string, int);
    void print(std::ostream&);
    int getCredits();
    std::string getCourseNumber();
    std::string getCourseName();
    courseType(std::string = "", std::string = "", int = 0);
};

#endif