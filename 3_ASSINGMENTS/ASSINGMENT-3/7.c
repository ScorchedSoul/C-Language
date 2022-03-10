// 21BMA050_PALAK RAJ

/* Write a program to print following pattern:
      1
      22
      333
      4444
*/

#include <stdio.h>
void main()
{
   int i,j,rows;

   for(i=1;i<=4;i++)

   {

	for(j=1;j<=i;j++)

	   printf("%d",i);
	   printf("\n");

   }

}