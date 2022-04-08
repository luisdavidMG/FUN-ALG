#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int lenght, int num ){
    for (int i = 0; i < lenght; i ++){
        if (num == arr[i]){
            return i;
        }       
    }
return -1;
}

int main(){
    int arr[] = { 10, 50, 20, 58, 20};
    int lenght = sizeof(arr)/sizeof(int);
    int num = 0;
    printf("Escribe el numero: \n");
    scanf("%i", &num);
    int index1= linearSearch(arr, lenght, num);
    if (index1 ==  -1){
        printf("El numero no se encuentra, busca otro volviendo a compilar\n");
        
    }
    else {
        printf("La posicion esta ubicado en el lugar: %i \n", index1 +1);
    }
}
