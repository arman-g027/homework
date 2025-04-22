#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void *mycalloc(int byte_count, int element_count);

int main() {
    
   int *ptr = mycalloc(4,10);
         if(ptr == NULL){
             prtinf("Couldn't allocate memory \n");
             return 1;
         }

    free(ptr);
}

// 4 10;

void *mycalloc(int byte_count, int element_count){
        int size = byte_count * element_count;
         char* ptr = (char*)malloc(size);
         if(ptr == NULL){
            printf("NULL");
          }
         for(int i = 0; i < size; i++){
            ptr[i] = 0;
         }
        return ptr;
        /* kam el senc
             memeset(ptr, 0, byte_count * element_count); */
}

