#include <stdio.h>

void doiGiaTri(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 30, y = 5;
    
    printf("Truoc khi doi: x = %d, y = %d\n", x, y);
    
    doiGiaTri(&x, &y);
    
    printf("Sau khi doi: x = %d, y = %d\n", x, y);
    
    return 0;
}


