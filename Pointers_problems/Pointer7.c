#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

   char *start = str;
    char *end = str;

    while(*end != '\0')
        end++;
    end--;

    int count = 1;

    while(start < end) {
        if(*start != *end) {
            count = 0;
            break;
        }
        start++;
        end--;
    }

    if(count)
        printf("YES");
    else
        printf("NO");

    return 0;
}

