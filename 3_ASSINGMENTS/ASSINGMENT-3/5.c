// 21BMA050_PALAK RAJ

// // Write a programme to print table for the given number using while loop

#include <stdio.h>

int main()
{
    int i=0 , n, product ;
    
    printf("Enter the number you want the table of: \n");
    scanf("%d\n", &n);
    printf("Table: \n", n);

    while ( i <= 10)
    {
        product = n * i ;
        printf("%d x %d = %d\n", n , i, product);
        i++ ;
    }

    return 0 ;
    
}