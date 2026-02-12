#include<stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c Valid\n", str[i]);
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c Invalid\n", str[i]);
        }
    }

    return 0;
}
