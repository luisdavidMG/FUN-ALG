#include <stdio.h>
#include <stdlib.h>
char* myName = "Luis David"; //%s
//atoi(anStringHere): //atof
//char*  str ="";
//int aNumber = 18;

int main(int argc, char** argv){
    //sprintf(str, "%d", aNumber);
    printf("Wlcome to program %s\n", argv [0]);
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;
    printf("The sum is equal to %d\n", sum);

    return 0;
}
