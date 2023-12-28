// Viết chương trình kiểm tra in ra n số fibonacci đầu tiên
#include <stdio.h>
#include <math.h>
long fibonacci(long n) {
    if (n == 1 || n == 2) {
        return 1;
    } else return fibonacci(n -1) + fibonacci(n - 2);
}
int main() {
    long n;
    printf("Nhap n: ");
    scanf("%ld", &n);
   printf("Day fibonacci la: ");
    for (int i = 1;  i <= n; i++) {
        printf("%ld ", fibonacci(i));
    }

    return 0;
}