#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   char* ptr;
   char cad[20];

   ptr = &cad[0];

printf("\n Ingresa cadena: ");
gets(ptr);
puts(ptr);

ptr = &cad[3];
puts(ptr);
}
