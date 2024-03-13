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
    myArray(); //Constructor

    myArray(int size); //Constructor with size

    myArray(int startIndex, int size); //Constructor with parameters index, size
    
    ~myArray(); //destructor

    void creatArray(int startIndex, int size); //Parameters are index, size
    
    T get(int dataValue); //getter
    
    void set(int, T data); //setter
    
    void print(); //print values

};


#endif