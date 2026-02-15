#include <stdio.h>

float simpleInterest(int p, int r, int t) 
{
    return (p * r * t) / 100.0;
}

int main() {
    int p, r, t;
    scanf("%d %d %d", &p, &r, &t);
    printf("%.2f", simpleInterest(p, r, t));
    return 0;
}
