//Viel Cunningham
//cunningham.vikel@titans.easternflorida.edu
#ifndef CLOCKTYPE_H
#define CLOCKTYPE_H

class clockType{
private:
    int hr;
    int min;
    int sec;

public:
    void setTime(int, int, int);
    void getTime(int&, int&, int&) const;
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType&) const;

    

};

#endif