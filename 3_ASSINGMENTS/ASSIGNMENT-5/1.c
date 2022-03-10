
// 21BMA050_PALAK RAJ

// Write a program to calculate the sum of two numbers using function.

#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a, b, c;
    printf("enter the 2 nos\n");
    scanf("%d %d", &a, &b);
    c = sum(a,b);
    printf("%d",c);
    
}
int sum( int a, int b)
{
    int c;
    c = a + b;
    
    return c;
}