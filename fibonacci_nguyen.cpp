// Viết CT kiểm tra n có phải số thuộc dãy fibonacci không, in ra dãy fibonacci từ 1 đến n
#include <stdio.h>
#include <math.h>
// kiểm tra xem n có thuộc dãy các số fibonacci không
bool kiemtra_so_fibonacci(long n) {
    long a = 1;
    long b = 1;
    while (a < n) {
        long temp = a;
            a = b;
            b = temp + b;
    } return n == a;
}

// in các số thuộc dãy fibonacci từ 1 đến n
void in_fibonacci(long n) {
    printf("Cac so thuoc day fibonacci truoc %ld la: ", n);
    for (int i = 1; i <= n; i++) {
        if (kiemtra_so_fibonacci(i)) {
            printf("%ld ", i);
        }
    }
}
int main() {
    long n;
    printf("Nhap n: ");
    scanf("%ld", &n);
    if (n <= 0) {
        printf("Vui long nhap lai\n");
        return 1;
    }
    if (kiemtra_so_fibonacci(n)) {
        printf("%ld la so thuoc day fibonacci\n", n);
    } else printf("%ld la so khong thuoc day fibonacci\n", n);
    
    in_fibonacci(n);

    return 0;
}