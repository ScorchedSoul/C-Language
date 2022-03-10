
// 21BMA050_PALAK RAJ

// Write a program to calculate the average of five numbers.

#include <stdio.h>

//int sum(int a, int b)

float average(int a, int b, int c, int d, int e)
{
    float av;
    
    av = (float)(a+b+c+d+e)/5;
    return av;
}
int main()
{
    int a, b, c, d, e;
    float avg;
    printf("enter the 5 nos\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = average(a,b,c,d,e);
    printf("%f",avg);
    
}