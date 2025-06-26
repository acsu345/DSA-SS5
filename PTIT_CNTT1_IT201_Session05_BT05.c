#include <stdio.h>
#include <string.h>

int palindrome(int left,int right,char *str) {
    if (left > right) return 1;
    if (str[left] != str[right]) {
        return 0;
    }
    return palindrome(left+1,right-1,str);
}
int main() {
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = 0;
    int len = strlen(str);
    if (palindrome(0,len-1,str)) {
        printf("Palindrome valid");
    }else {
        printf("Palindrome invalid");
    }

    return 0;
}