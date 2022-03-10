// 21BMA050_PALAK RAJ

// Write a programme to print table for the given number using do while loop

#include <stdio.h>

int main()
{
    int i= 0, n , product;

    printf("Enter the number you want the table for: \n");
    scanf("%d\n", &n);
    printf("Table of %d: \n", n);

    do
    {
        product = n*i ;
        printf("%d x %d = %d\n", n, i, product);
        i++ ;

    } while (i <= 10);

    return 0 ;
    
}