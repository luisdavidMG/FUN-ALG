#include <stdio.h>

int main() {
    int num = 0;
    printf("Give a number: \n");
    scanf("%d", &num);

    int mod = num % 2;
    if(mod){
        printf("the result of %d is: odd \n", num);
    }else{
        printf("The result of %d is: even: \n", num);
    }
}
