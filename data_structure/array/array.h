#ifndef DATA_STRUCTURE_ARRAY_H
#define DATA_STRUCTURE_ARRAY_H

#define MAX_ARRAY_SIZE 100

class Array{
public:
    Array(int s, const int ar[]);
    Array(int s);

    void deleteByIndex(int idx);
    void insertByIndex(int idx, int data);
    void printData();

private:
    bool isOverflow();
    static bool isOverflow(int s);

    int size;
    int nums[100];
};


#endif //DATA_STRUCTURE_ARRAY_H
