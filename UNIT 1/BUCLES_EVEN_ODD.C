#include <stdio.h>

int main(){
    int cont = 100;
    printf("Up to what number you wish to count:\n");
    scanf("%d",&cont);
    printf("Even numbers: \n");
    for (int i = 0; i <= cont; i++){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    printf("Odd numbers: \n");
    int ind=0;
    while(ind != cont){
        if(ind % 2 != 0){
            printf("%d\n", ind);
        }
        ind++;
    }
    return 0;
}
        
