#include <stdio.h>

void InsertSort(int arr[], int length)
{
    int temp;

    int i;
    for (i = 1; i < length; ++i) // start from array's second element
    {
        temp = arr[i]; // record the current element
        int j = i - 1;
        while (j >= 0 && temp < arr[j]) // compare the current element with sorted sequence
        {
            arr[j + 1] = arr[j]; // move back the sequence which has sorted already
            --j;
        }
        arr[j + 1] = temp; // insert the current element
    }
}

int main(void)
{
    int arr[10] = {9, 2, 8, 2, 3, 2, 4, 10, 34, 5};

    InsertSort(arr, 10);

    int i;
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
