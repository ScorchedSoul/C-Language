
// Write a C programme to perform all arithemetic operations

#include <stdio.h>

int main()
{
    int no1, no2, sum, difference, product, quotient, remainder ;

    printf("Enter the first number: ");
    scanf("%d", &no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);

    sum = no1 + no2 ;
    difference = no1 - no2 ;
    product = no1 * no2 ;
    quotient = no1 / no2 ;
    remainder = no1 % no2 ;

    printf("SUM: %d\n", sum);
    printf("DIFFERENCE: %d\n", difference);
    printf("PRODUCT: %d\n", product);
    printf("QUOTIENT: %d\n", quotient);
    printf("REMAINDER: %d\n", remainder);

    return 0;

}

