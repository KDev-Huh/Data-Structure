#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array* a = new Array(10);

    a->insertByIndex(0, 1);
    a->insertByIndex(1, 2);
    a->insertByIndex(2, 3);
    a->insertByIndex(3, 4);
    a->printData();

    a->deleteByIndex(0);
    a->deleteByIndex(2);
    a->printData();

    return 0;
}