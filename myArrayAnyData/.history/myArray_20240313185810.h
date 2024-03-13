#ifndef MYARRAY_H
#define MYARRAY_H

template <class T>
class myArray {
private:
    int index;
    int arraySize;
    T* array;

public:
    myArray();
    myArray(int size);
    myArray(int startIndex, int size);
    ~myArray();

    void creatArray(int startIndex, int size);
    T get(int accessIndex);
    void set(int accessIndex, T value);
    void print();
};

#endif
