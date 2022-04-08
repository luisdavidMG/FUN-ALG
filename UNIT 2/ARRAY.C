#include<stdio.h>
int main(){
    int arreglo[] = {5,2,3};
    int length = sizeof(arreglo) /sizeof (int);
    int myArray=0;
    while (myArray < length){
        printf("%d\t", arreglo[myArray]);
       printf("\n");
        myArray++;
      
    }
    
return 0;
}
