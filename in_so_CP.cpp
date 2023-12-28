// Viết chương trình kiểm tra n có phải số chính phương không, in các số chính phương từ 0 đến n
#include <stdio.h>
#include <math.h>
// Kiểm tra n có phải là số chính phuong hay không
bool kiemtra_so_CP(long n) {
    for (long i = 1; i < n; i++) {
        if (sqrt(n) * sqrt(n) == n) {
            return true;
        }
    } return false;
}
// in các số chính phương trước n
void in_so_CP(long n) {
    printf("Cac so chinh phuong dung truoc %ld la: ", n);
    for (long i = 1; i < n; i++) {
        if (kiemtra_so_CP(i)) {
        printf("%ld ", i);
        }
    }
}
int main() {
    long n;
    printf("Nhap n: ");
    scanf("%ld", &n);

    if (kiemtra_so_CP(n)) {
        printf("%ld la so chinh phuong\n", n);
    } else printf("%ld khong la so chinh phuong\n", n);

    in_so_CP(n);

    return 0;
}