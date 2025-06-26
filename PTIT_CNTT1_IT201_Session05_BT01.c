#include <stdio.h>

void show (int num, int n) {
    if (num > n) return ;
    printf("%d\n", num);
    show(num+1, n);
}
int main(void) {
    int n;
    printf("Nhap so luong phan tu ban muon:");
    scanf("%d", &n);
    if (n< 0 ) {
        printf("So luong phan tu nhap vao khong hop le");
        return 1;
    }
    show(1, n);
    return 0;
}