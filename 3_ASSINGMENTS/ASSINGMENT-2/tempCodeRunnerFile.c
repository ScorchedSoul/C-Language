#include <stdio.h>

int main()
{
    int a , ls, rs ;

    printf("Enter a number: ");
    scanf("%d\n", &a);

    ls = a<<2 ;
    rs = a>>2 ;

    printf("Left Shift: %d\n", ls);
    printf("Right Shift: %d\n", rs);

    return 0 ;

}