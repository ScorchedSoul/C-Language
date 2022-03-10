// 21BMA050_PALAK RAJ

// Write a program to calculate Factorial of a user input number.

#include <stdio.h>

int main()
{
    int i, n, factorial = 1 ;
    printf("ENTER THE NO. YOU WANT THE FACTORIAL OF: \n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {

        factorial = factorial * i ;
       
    }

     printf("The factorial of the number is: %d\n", factorial);

    return 0 ;
    
}