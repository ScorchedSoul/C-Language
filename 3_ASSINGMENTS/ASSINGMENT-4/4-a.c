// 21BMA050_PALAK RAJ

#include <stdio.h>

int main()
{

    int row, gap, star ;

    for ( row = 1; row <= 5;  ++row)
    {
        for (gap = 1; gap <= (5-row); gap++)
        {
            printf(" ");
        }

        for ( star = 1; star <= ((2*row) - 1); star++)
        {
           printf("*");
        }
        
        printf("\n");

    }

    return 0 ;
    
}