// Bài tập: Cho số nguyên dương n. Kiểm tra số nguyên dương n có phải là số chính phương hay không ?
#include <stdio.h>
#include <math.h>
int kt_so_CP(int n) {
    int kiem_tra = 0;
    if (sqrt(n) * sqrt(n) == n) {
        kiem_tra = 1;
    } 
    return kiem_tra;
}
int main() {
    int n;
    int kiem_tra = 0;
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    if (kt_so_CP(n)) {
        printf("%d la so chinh phuong\n", n);
    } else printf("%d khong la so chinh phuong\n", n);
    return 0;
}