#include <stdio.h>
#include "sum.h"
//Variables Globales
//DataType int, float, string(*), caracters
int edad =18;
float estatura= 1.50;
char* name = "Priscila";
char sexo = 'F';
int main(){
    int after10years = suma(edad, 10);
    printf("mi edad despues de 10 años: %d\n", after10years);
  
  
    return 0;
}
