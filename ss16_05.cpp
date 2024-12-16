#include <stdio.h>

void capNhatPhanTu(int *arr, int giaTriMoi, int viTri, int n) {
    if (viTri >= 0 && viTri < n) {
        *(arr + viTri) = giaTriMoi;
    } else {
        printf("Vi tri khong hop le!\n");
    }
}

int main() {
    int arr[] = {21, 38, 43, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    capNhatPhanTu(arr, 15, 3, n); 

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}



