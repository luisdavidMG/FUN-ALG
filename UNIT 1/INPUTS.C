#include <stdio.h>

int num1;
int num2;

int main (){
    //imprimir mensaje
    
    printf("Enter num1:\n\tnum1: ");
    //Inputs
    scanf("%d", &num1); //Inputs Keyboard
    printf("Enter num2:\n\tnum2: "); //Outputs Screen
    scanf("%d", &num2);
    //Procesos
    int sum = num1 + num2;
    printf("suma = %d\n", sum);
    
    return 0;
}
