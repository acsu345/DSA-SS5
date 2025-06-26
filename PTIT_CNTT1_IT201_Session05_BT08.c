#include <stdio.h>
#include <string.h>

int isValid(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') return 0;
    }
    return 1;
}

int convert(char *str, int index) {
    if (str[index] == '\0') return 0;
    int digit = str[index] - '0';
    int power = 1;
    for (int i = 0; i< strlen(str) - index - 1; i++) {
        power *= 10;
    }
    return digit * power + convert(str, index + 1);
}
int main() {
    char str[100];
    printf("Nhap chuoi so");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    if (!isValid(str)) {
        printf("Input khong hop le")
        return 1;
    }
    int result = convert(str, 0);
    printf("%d", result);
    return 0;
}
