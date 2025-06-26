#include <stdio.h>
#include <stdlib.h>
int sumArr(int *arr, int n, int index) {
    if (index >= n) {
        return 0;
    }
    return arr[index] + sumArr(arr, n, index+1);
}
int main() {
    int n;
    printf("Nhap so luong phan tu trong mang:");
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
        return 0;
    }
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat dong khong thanh cong");
    }
    for (int i = 0; i< n; i++) {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int total = sumArr(arr, n, 0);
    printf("%d", total);
    free(arr);
    return 0;
}