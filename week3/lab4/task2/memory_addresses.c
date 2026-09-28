#include <stdio.h>
#include <stdlib.h>

int global_var = 150;      // Data segment
int bss_var;               // BSS segment

int main() {
    int local_var = 30;                    // Stack
    static int local_static = 20;          // Data segment
    int *heap_var = (int *)malloc(sizeof(int));  // Heap

    *heap_var = 500;

    printf("Variable Addresses:\n");
    printf("-------------------\n");

    printf("global_var      (Data)  : %p\n", (void *)&global_var);
    printf("bss_var         (BSS)   : %p\n", (void *)&bss_var);
    printf("local_var       (Stack) : %p\n", (void *)&local_var);
    printf("local_static    (Data)  : %p\n", (void *)&local_static);
    printf("heap_var        (Heap)  : %p\n", (void *)heap_var);

    printf("\nAddress Difference:\n");
    printf("Stack - Heap = %ld bytes\n",
           (long)((char *)&local_var - (char *)heap_var));

    free(heap_var);

    return 0;
}
