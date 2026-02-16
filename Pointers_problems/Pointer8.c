#include <stdio.h>
int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    char *p1 = str1;
    char *p2 = str2;

    while(*p1 != '\0')
        p1++;

    p1--;  

    while(*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    printf("%s", str1);

    return 0;
}

