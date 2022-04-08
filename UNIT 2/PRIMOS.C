#include <stdio.h>
int main(){
  int i, num, cont=0;
  printf("Give me a number:");
  	scanf("%i",&num);
  	for(i = 1; i <= num; i++){
  		if(num %i == 0){
  			cont= cont + 1;
  		}
  	}
  	if(cont>2){
  		printf("The number is not prime.\n");
  	}
  	else{
  		printf("The number is prime. \n");
  	}
  	return 0;
  }
