// 21BMA050_PALAK RAJ

// Write a programm to calculate the sum of first n natural numbers by using for loop.


#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter the no\n");]\
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d natural no is %d",n,sum);
    return 0;
}