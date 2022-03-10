// 21BMA050_PALAK RAJ

#include <stdio.h>

int main()
{
    int row, gap, star ;

    for ( row = 0; row < 5; row++)
    {
        for ( gap = 0; gap <= (row - 1); gap++)
        {
            printf(" ");
        }

        for ( star = 1; star <= (9 - (2*row) ); star++ )
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0 ;
    
}