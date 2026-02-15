#include <stdio.h>

int reverse(int n) {
    int rev = 0, temp = n;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int main() {
    int n;
    scanf("%d", &n);
    if(n == reverse(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
