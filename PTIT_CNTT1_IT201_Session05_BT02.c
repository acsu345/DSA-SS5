#include <stdio.h>

int sum(int num, int n) {
    if (num > n) return 0;
    return num + sum (num+1, n);
}
int main() {
    int n;
    printf("Nhap so luong phan tu ban muon: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("khong hop le");
        return 0;
    }
    int result = sum(0,n);
    printf("Sum: %d", result);
    return 0;
}
