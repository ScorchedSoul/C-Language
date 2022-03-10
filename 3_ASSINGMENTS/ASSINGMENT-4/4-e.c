// 21BMA050_PALAK RAJ

#include <stdio.h>

int main()
{
    int row, gap, star ;

    for ( row = 0; row < 6; row++)
    {
       for ( gap = 0; gap <= (6-row); gap++)
       {
           printf(" ");
       }
       for ( star = 0; star <= row; star++)
       {
           printf("*");
       }
       
       printf("\n");
       
    }
    
    return 0;

}