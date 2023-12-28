// Kiểm tra số n được nhập từ bàn phím có phải số hoàn hảo không, và in ra các số hoàn hảo đứng trước n
#include <stdio.h>
#include <math.h>
long KT_So_hoan_hao(long n) {
    long tong_uoc = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            tong_uoc += i;
        }
    } return (tong_uoc == n);
}

void in_SHH(long n) {
    printf("Cac so hoan hao dung truoc %ld la: ", n);
    for (long i = 1; i <= n; i++) {
        if (KT_So_hoan_hao(i)) {
            printf("%ld ", i);
        }  
        }
}
int main() {
    long n;
    printf("Nhap n: ");
    scanf("%ld", &n);
    if (KT_So_hoan_hao(n)) {
        printf("%ld la so hoan hao\n", n);
    } else printf("%ld khong la so hoan hao\n", n);
    in_SHH(n);
    return 0;
}