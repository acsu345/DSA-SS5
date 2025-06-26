#include <stdio.h>

int faculy(int n , int k){
    if (k>n) return 1;
    return  k * faculy(n,k+1);
}
int main() {
    int n;
    printf("Nhap so luong phan tu ban muon: ");
    scanf("%d", &n);
    if (n < 0 ) {
        printf("Khong hop le");
        return 0;
    }
    printf("faculy = %d\n", faculy(n,1));
    return 0;
}