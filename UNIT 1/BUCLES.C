#include <stdio.h>
#include <stdlib.h>
#include  <stdbool.h>
int count = 1;

 int main (){
     printf("---while loop---\n");
        while ( count <= 100 ){
         printf("count: %d\n", count);
         count = count + 1;
     }
//      printf("---For loop---\n");
//       for(int i=1; i <= 100; i = i +1){
//       printf("i: %d\n", i);
//     }
//       for (int i = i; ;i = i + 1){
//         printf("i: %d\n", i);
//         if (i > 20000){
//           break;
//       }
//  }
    while (true){
        printf("Hello\n");
    }  
  return 0;
 }
