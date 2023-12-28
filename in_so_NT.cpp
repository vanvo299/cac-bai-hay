// Viết chương trình kiểm tra n có phải số nguyên tố không, in ra các số nguyên tố từ 0 đến n
#include <stdio.h>
#include <math.h>
bool Kiemtra_so_NT(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        } 
    }
    return true;
}

void in_so_NT(int n) {
    printf("Cac so nguyen to dung truoc %d la: ", n);
    for (int i = 2; i <= n; i++) {
        if (Kiemtra_so_NT(i) == true) {
            printf("%d ", i);
        }
    }
}
int main() {
    int n; // khởi tạo số cần kiểm tra số nguyên tố
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Vui long nhap lai!!!!\n");
        return 1;
    }
    if (Kiemtra_so_NT(n) == true) {
        printf("%d la so nguyen to\n", n);
    } else printf("%d khong phai la so nguyen to\n", n);

    in_so_NT(n);

    return 0;
}