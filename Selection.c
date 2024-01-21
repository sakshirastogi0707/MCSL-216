#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int arrayList[] = {55, 25, 15, 40, 60, 35, 17, 65, 75, 10};
    int n = sizeof(arrayList) / sizeof(arrayList[0]);

    // Displaying the original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayList[i]);
    }

    // Perform Selection Sort
    selectionSort(arrayList, n);

    // Displaying the sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrayList[i]);
    }

    return 0;
}

// Time complexity is: O(n^2);

