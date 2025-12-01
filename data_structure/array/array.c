#include <stdio.h>

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
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 10;

    printArray(nums, count);
    deletedData(nums, &count, 4);
    printArray(nums, count);

    return 0;
}