#include<stdio.h>
int main(){
    /*int array[] = {0,10,1,11,3,2};
    int num,der,i;
    int length = sizeof(array) /sizeof (int);
    */
   int array[6];
    int num,der,i;
    printf("Ingresa los numeros [0,10,1,11,3,2] \n");
        for(int num=0; num<=5; num++){
         printf("Ingresa el numero \t");
        scanf("%d",&array[num]);
}
//ordenar
for(num=0; num<=5; num++)
    for(i=0, der=1; der<=5; i++, der++)
        if(array[i]>array[der]){
            int tem=array[der];
            array[der]=array[i];
            array[i]=tem;
     }
     printf("Estos son los numeros ordenados\n");
     for(num=0; num<=5; num++)
     printf(" %d \n",array[num]);

}
