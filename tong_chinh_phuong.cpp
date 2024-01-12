/*
Câu 1: Cho số tự nhiên N (n <= 7000000). Phân tích N thành tổng các số chính phương nhỏ dần
sao cho số các số hạng ít nhất
*/
#include <stdio.h>
#include <math.h>

int main() {
	printf("Nhap n: ");
    int n;
    scanf("%d", &n);
    for (int i = sqrt(n); i > 0; i--) {
        while (n - i * i >= 0) {
            printf("%d^2 ", i);
            if (n - i * i > 0) {
                printf("+ ");
            }
            n -= i * i;
        }
    }
    printf("\n");
    return 0;
}
