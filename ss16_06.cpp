#include <stdio.h>

int timKiem(int *arr, int giaTri, int n) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giaTri) {
            return i; // Trả về vị trí của phần tử
        }
    }
    return -1; // Nếu không tìm thấy, trả về -1
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int giaTriCanTim = 4;
    
    int viTri = timKiem(arr, giaTriCanTim, n);
    
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", giaTriCanTim);
    }
    
    return 0;
}