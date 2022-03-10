// 21BMA050_PALAK RAJ

#include<stdio.h>

int main()
{   
    int i,j,k,l;
    
    for(i=1;i<=5;i++)
    {    
        for(j=(5-i);j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("%d",(2*(5-i)+1));    
        }
        
    printf("\n");
    }
    
    return 0;
}
    