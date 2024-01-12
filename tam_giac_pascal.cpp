// Viết chương trình in ra tam giác pascal
#include <stdio.h>
#include <math.h>
int factorial(int m) {
    int fact = 1; 
    for (int i = 1; i <= m; i++) {
        fact *= i;
    } return fact;
}
void tam_giac_pascal(int n)
{
    for (int i = 0; i <= n; i++) {
        for (int k = 0; k < n - i; k++) {
            printf("  ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%4d", factorial(i) / (factorial(i - k) * factorial(k)));
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Nhap so hang cau tam giac: ");
    scanf("%d", &n);
    tam_giac_pascal(n);
    return 0;
}