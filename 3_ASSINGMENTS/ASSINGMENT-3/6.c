// 21BMA050_PALAK RAJ

// Write a program to print table for the given number using for loop.

#include<stdio.h>

int main()
{   
    int n,i=1,tab;
    printf("enter the no\n");
    scanf("%d",&n);
    for(i;i<=10;i++)
    {
        tab=n*i;
        printf("%d * %d = %d\n",n,i,tab);
        
    }
    
    return 0;
}