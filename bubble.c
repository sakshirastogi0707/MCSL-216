#include <stdio.h>

void bubbleSort(int arr[], int n){
   int i, j, temp;
   for(i = 0; i< n -1; i++){
       for(j=0; j<n -1; j++){
           if(arr[j] > arr[j+1]){
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               
           }
       }
       
   }
}
    
    int main(){
    int arrayList[] = {55, 25, 15, 40, 60, 35, 17, 65, 75, 10};
    int n = sizeof(arrayList) / sizeof(arrayList[0]);

    // Displaying the original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrayList[i]);
    }
 
    // Perform Bubble Sort
    bubbleSort(arrayList, n);

    // Displaying the sorted array
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrayList[i]);
    }

    return 0;
}

// Time  Complexity analysis.
// O(n^2)