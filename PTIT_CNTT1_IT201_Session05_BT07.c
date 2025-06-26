#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
void genFibonacci(int n, int *arr, int index) {
    if (index>=n) return;
    arr[index]=fibonacci(index);
    genFibonacci(n, arr, index+1);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if (n<0) {
        printf("Input khong hop le");
    }
    int *arr =(int*) malloc(sizeof(int) * n);
    if (arr==NULL) {
        printf("Cap phat dong khong thanh cong");
        return 1;
    }
    genFibonacci(n, arr, 0);
    printf("[");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("]");
    free(arr);
    return 0;
}

