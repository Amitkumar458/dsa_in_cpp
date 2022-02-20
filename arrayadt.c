#include <stdio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myarray *a ,int tsize , int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int *) malloc(tsize*sizeof(int));
}

int main () {
   struct myarray marks;

   createarray(&marks , 100 , 20);
   return 0;
}
