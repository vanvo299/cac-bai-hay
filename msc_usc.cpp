// Viết chương trình tìm mẫu số chung, ước số chung của n số tự nhiên bất kì
#include <stdio.h>
#include <math.h>
// hàm tính ước chung lớn nhất (GCD) của 2 số
long GCD(long a, long b) {
    if (a == 0) {
        return b;
    } 
    else if (b == 0) {
        return a;
    }
        else GCD(b, a % b);
}

// hàm tính bội chung nhỏ nhất (LCM) của 2 số
long LCM(long a, long b) {
    return (a * b) / GCD(a, b);
}

// hàm tính mẫu số chung của nhiều số 
long LCM_n(long mtr[], long n) {
    long lcm = mtr[0];
    for (long i = 1; i < n; i++) {
        lcm = LCM(lcm, mtr[i]);
    } return lcm;
}

// hàm tính ước số chung của nhiều số
long GCD_n(long mtr[], long n) {
    long gcd = mtr[0];
    for (long i = 1; i < n; i++) {
        gcd = GCD(gcd, mtr[i]);
    } return gcd;
}
int main() {
    long n; 
    long mtr[100];
    printf("Nhap so luong so can tim: ");
    scanf("%ld", &n);
    printf("Nhap cac so can kiem tra: ");
    for (long i = 0; i < n; i++) {
        scanf("%ld", &mtr[i]);
    }
    printf("Mau so chung la: %ld", LCM_n(mtr, n));
    printf("\nUoc so chung la: %ld", GCD_n(mtr, n));

    return 0;
}