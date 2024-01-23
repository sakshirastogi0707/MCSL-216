#include <stdio.h>
#define precision 2
// Bad quality code.

double calculate_Average(int arr[], int length)
{
    int i, total = 0;
    for (i = 0; i < length - 1; i++)
    {
        total += arr[i];
    }
    return (double)(total / length);
}

int main()
{
    int array[] = {10, 10};
    int length = sizeof(array) / sizeof(array[0]);

    double avg = calculate_Average(array, length);
    printf("The Average is : %.2f\n", avg);

    return 0;
}

// 1.  Leck of comments
// 2.  Magic numbers : The precision (.2f) is used directly in the printf statement.
//     It's considered bad practice to use magic numbers or strings directly in the code without explanation or constants.
// 3.  No Function Prototypes:
// 4. Inadequate Error Handling: While the code handles the case where the input array is empty,
//    it doesn't handle cases where the array contains invalid data or non-numeric values.
// 5. Limited Function Decomposition: The problem is not brack down in the proper manner.

// Good Quality Code:

// Function Prototype
#include <stdio.h>
#define precision 2

double calculate_Average(int arr[], int length);
void print_error_and_exit(const char *message);

int main()
{
    int arr[] = {2, 4, 6, 7, 8};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    double avg = calculate_Average(arr, arrLength);
    if (avg == -1)
    {
        print_error_and_exit("Error: Array must contain at least two elements.");
    }

    printf("The average is %.*f.\n", precision, avg);

    return 0;
}

double calculate_Average(int arr[], int length)
{
    // Check for valid arguments
    if (length < 1)
    {
        return -1;
    }
    // Calculate sum and average
    else
    {
        int total = 0;
        for (int i = 0; i < length; i++)
        {
            total += arr[i];
        }
        return (double)total / length;
    }
}

void print_error_and_exit(const char *msg)
{
    fprintf(stderr, "%s\n", msg);
}
