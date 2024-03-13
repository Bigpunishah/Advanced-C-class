#ifndef MYARRAY_H
#define MYARRAY_H

class myArray{
private:
    int index;
    int arraySize;
    int array [];

public:
    //Parameters are index, size
    void creatArray(int, int);
    //Constructor
    myArray();
    //Constructor with parameters
    myArray(int, int); 
};


#endif