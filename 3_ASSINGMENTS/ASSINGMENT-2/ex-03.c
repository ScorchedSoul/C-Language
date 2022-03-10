
//21BMA050_PALAK RAJ

// Write a programme to perform left shift and right shif operators in C 

#include <stdio.h>

int main()
{
    int a ;

    printf("ENTER A NUMBER: ");
    scanf("%d", &a);

    printf("Left shift[ a<<1 ] = %d\n", a<<1);
    printf("Right shift[ a>>1 ] = %d\n", a>>1);

    return 0;

}