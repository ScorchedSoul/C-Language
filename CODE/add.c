
//Calculate the sum of two numbers given by the user

#include <stdio.h>

int main()
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

//calculating sum
 sum = a + b;

    printf("%d + %d = %d", a, b, sum);
    
        return 0;
}