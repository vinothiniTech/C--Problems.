int main() {
    int n, digit, base = 1, decimal = 0;
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        decimal += digit * base;
        base *= 2;
        n /= 10;
    }

    printf("%d", decimal);
    return 0;
}
