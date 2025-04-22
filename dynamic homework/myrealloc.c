#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void * myrealloc(void * addr, int oldsize, int newsize);

int main() {
    
    int size = sizeof(int) * 10;
    char *ptr = (char*)malloc(size);
    if(ptr == NULL){
        printf("Couldn't allocate memory \n");
        return 1;
    }
    char *ptr2 = myrealloc(ptr, size, 60); 
    free ptr2;    
   
   return 0;

}



void * myrealloc(void * addr, int oldsize, int newsize){
        
        char *old_addr = (char *)addr;
        if(oldsize > newsize){
            return addr;
        }
            char * ptr = (char*)malloc(newsize);
            if(ptr == NULL){
                return NULL;
            } else {
                for(int i = 0; i < oldsize; i++){
                        ptr[i] = old_addr[i];
                }
            }
            free(addr);
            return ptr;
}

