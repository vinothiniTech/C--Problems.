#include<stdio.h>
int main() {
    char str[100];
    scanf("%s",str);
    int len=0,count=1;
    while (str[len]!='\0') {
        len++;
    }
    for (int i = 0; i<len/2; i++) {
        if (str[i]!=str[len - i - 1]) {
            count=0;
            break;
        }
    }
    if (count) {
        printf(" Palindrome");

    }
    else {
        printf("Not Palindrome");
    }
    return 0;
}

