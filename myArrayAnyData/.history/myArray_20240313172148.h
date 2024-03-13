#ifndef MYARRAY_H
#define MYARRAY_H

//This allows the data type to be different
template<typename T>

class myArray{
private:
    int index;
    int arraySize;
    int* array;

public:
    //Parameters are index, size
    //This function will also include error handling
    void creatArray(int, int);
    //getter
    int get(int);
    //setter
    void set(int, int);
    //print values
    void print();
    //Constructor
    myArray();
    //Constructor with size
    myArray(int);
    //Constructor with parameters index, size
    myArray(int, int);
    //destructor
    ~myArray();

};


#endif