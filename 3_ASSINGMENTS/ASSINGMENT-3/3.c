// 21BMA050_PALAK RAJ

// Write a program to calculate the sum of first n natural numbers by using do while loop.

#include <stdio.h>

int main()
{
    int n , i = 1, sum = 0 ;

    printf("Enter the number till which you want the sum: \n");
    scanf("%d", &n);

   do
   {
       sum += i ;
       i++ ;

   } while (i <= n);
   

    printf("%d\n", sum);

    return 0 ;

}
