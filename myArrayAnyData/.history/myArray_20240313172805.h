#ifndef MYARRAY_H
#define MYARRAY_H

//This allows the data type to be different
template<class T>

class myArray{
private:
    int index;
    int arraySize;
    T* array;

public:
    //Constructor
    myArray();
    //Constructor with size
    myArray(int size);
    //Constructor with parameters index, size
    myArray(int startIndex, int size);
    //destructor
    ~myArray();

    //Parameters are index, size
    //This function will also include error handling
    void creatArray(int startIndex, int size);
    //getter
    int get(int);
    //setter
    void set(int, T data);
    //print values
    void print();

};


#endif