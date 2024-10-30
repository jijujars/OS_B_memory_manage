#include <stdio.h>
int a = 1;
int b = 2;
int c = 3;
int stack(int x) {
  printf("level %d: x is at %p\n", x, (void*)&x);
  if (x == 0) return 0;
  return stack(x - 1);
}

int main(){
    printf("DATA :");
    printf("level 2: x is at %p\n", (void*)&a);
    printf("level 1: x is at %p\n", (void*)&b);
    printf("level 0: x is at %p\n", (void*)&c);
    printf("STACK :");
    stack(4);
    
    int* i = malloc(sizeof(int));
    int* j = malloc(sizeof(int));
    int* k = malloc(sizeof(int));
    printf("HEAP :");
    printf("level 2: x is at %p\n", (void*)i);
    printf("level 1: x is at %p\n", (void*)j);
    printf("level 0: x is at %p\n", (void*)k);
    return 0;
    
    free(i);
    free(j);
    free(k);
}