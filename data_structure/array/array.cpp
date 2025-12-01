#include "array.h"
#include <iostream>

Array::Array(int s, const int ar[])
{
    if(isOverflow(s)) return;
    this->size = s;
    for(int i = 0; i < s; i++) {
        this->nums[i] = ar[i];
    }
}

Array::Array(int s) {
    if(isOverflow(s)) return;
    this->size = s;
}

void Array::deleteByIndex(int idx)
{
    if(idx >= size) return;

    this->size--;
    for(int i = idx; i < this->size; i++)
    {
        nums[i] = nums[i + 1];
    }
}

void Array::insertByIndex(int idx, int data) {
    if(idx >= size || size >= MAX_ARRAY_SIZE) return;

    for(int i = size; i > idx; i--) {
        nums[i] = nums[i - 1];
    }
    nums[idx] = data;
    size++;
}

bool Array::isOverflow() {
    return isOverflow(this->size);
}

bool Array::isOverflow(int s) {
    return s > MAX_ARRAY_SIZE;
}

void Array::printData() {
    std::cout << "배열 안의 요소 : ";
    for(int i = 0; i < this->size; i++) {
        std::cout << this->nums[i] << " ";
    }
    std::cout << std::endl;
}
