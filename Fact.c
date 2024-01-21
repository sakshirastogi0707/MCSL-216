#include <stdio.h>

int factorial(int n){
    if(n==0|| n==1){
        return 1;
    }
    else{
        return n* factorial(n-1);
    }
}

int main(){
    int num;
    printf("Enter the number lass then 10: ");
    scanf("%d" , &num);
    
    if(num==0 || num>=10){
        printf("Invailed input! Please Enter integer less then 10. \n");
        return 1;
    }
    
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
}

