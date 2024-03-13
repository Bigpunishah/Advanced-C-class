#ifndef MYARRAY_H
#define MYARRAY_H

class myArray{
private:
    int index;
    int arraySize;
    int* array;

public:
    //Parameters are index, size
    //This function will also include error handling
    void creatArray(int, int);
    //access fucntion
    void accessFcuntion(int);
    //Constructor
    myArray();
    //Constructor with size
    myArray(int);
    //Constructor with parameters index, size
    myArray(int, int); 
};


#endif