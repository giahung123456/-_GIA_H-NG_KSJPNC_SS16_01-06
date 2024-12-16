#include <stdio.h>

int main() {
    int x = 3;
    int *ptr = &x;
    
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", &x);
    
    printf("Gia tri cua x qua con tro ptr: %d\n", *ptr);
    printf("Dia chi cua ptr: %p\n", ptr);
    
    return 0;
}