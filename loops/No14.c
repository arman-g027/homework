#include <stdio.h>


int main(){

    int num;

     printf("Enter index -> ");
     scanf("%d", &num);

      if(num <= 1){
          printf("%d\n", num);
      } else {
      int prev = 0;
      int next = 1;
      int last = 0;
      for(int i = 1; i < num; i++){
                last = prev + next;
                prev = next;
                next = last;
          }
          printf("%d\n", last);
     }
            

    return 0;
}
