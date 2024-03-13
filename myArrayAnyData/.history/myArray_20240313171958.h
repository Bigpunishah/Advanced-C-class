#ifndef MYARRAY_H
#define MYARRAY_H

class myArray{
private:
    template<typename T>
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