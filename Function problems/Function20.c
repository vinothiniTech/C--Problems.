#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {
    float a, b;
    char ch;
    scanf("%f %f %c", &a, &b, &ch);

    switch(ch) {
        case '+': printf("%.2f", add(a,b)); break;
        case '-': printf("%.2f", sub(a,b)); break;
        case '*': printf("%.2f", mul(a,b)); break;
        case '/': printf("%.2f", div(a,b)); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
