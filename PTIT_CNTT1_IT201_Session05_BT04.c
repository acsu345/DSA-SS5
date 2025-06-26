#include <stdio.h>

int total(int n, int m) {
    if (m == n) return m;
    return m + total(n, m-1);
}
int main () {
    int firstNum,secondNum;
    printf("Nhap so dau tien: ");
    scanf("%d", &firstNum);
    printf("Nhap so thu hai: ");
    scanf("%d", &secondNum);
    if ( firstNum < 0 || secondNum < 0) {
        printf("Khong hop le");
        return 0;
    }
    int reasult = total(firstNum, secondNum);
    printf("Total: %d", reasult);
    return 0;
}