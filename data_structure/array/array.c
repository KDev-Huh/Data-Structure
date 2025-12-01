#include <stdio.h>

void insertData(int *ap, int *count, int index, int data)
{
    if(index <= *count)
    {
        for(int i = *count; i > index; i--)
        {
            ap[i] = ap[i - 1];
        }
        ap[index] = data;
        (*count)++;
    }
    else return;
}

void deletedData(int *ap, int *count, int index)
{
    if(index < *count)
    {
        (*count)--;
        for(int i = index; i < *count; i++)
        {
            ap[i] = ap[i + 1];
        }
    }
    else
    {
        return;
    }
}

void printArray(int* ap, int count)
{
    printf("배열 안의 요소: ");
    for(int i = 0; i < count; i++)
    {
        printf("%5d", ap[i]);
    }
    printf("\n");
}

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7};
    int count = 7;

    printArray(nums, count);
    insertData(nums, &count, 5, 9);
    printArray(nums, count);
    deletedData(nums, &count, 4);
    printArray(nums, count);

    return 0;
}