// 21BMA050_PALAK RAJ

#include <stdio.h>

int main()
{
    int row, gap, number ;

    for ( row = 1; row <= 5; row++)
    {
        for ( gap = 1; gap <= 5 - row ; gap++)
        {
            printf(" ");
        }

        for ( number = 1; number < row ; number++)
        {
            printf("%d", number);
           
        }

        for ( number = row; number >= 1; number--)
        {
            printf("%d", number);

        }
        

        printf("\n");
        
    }

    return 0 ;
    
}