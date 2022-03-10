
// Initialisation of variable octal and hexadecimal initialisation

#include <stdio.h>

int main()
{
    int variable = 050;
    int hexa = 0x50;

// default se initialised variable "octadecimal" hota hai

    printf("Decimal: %d\n", variable);
    printf("Octadecimal: %o\n", variable);
    printf("Hexadecimal: %x\n", variable);

 // if we use d/o/h   then wo value %d/%o/%h ke liye convert nahi hoga ... provided int variable = 0<d/o/x>50
 
    printf("hexa-hexavalue: %x\n", hexa);
    printf("decimal-hexavalue: %d\n", hexa);
    printf("octadecimal-hexavalue: %o\n", hexa);

    return 0;

}