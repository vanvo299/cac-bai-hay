// Viết chương trình nhập 03 số a,b,c từ bàn phím. Tìm số trung gian của 03 số này bằng toán tử ?.
/*
-THUẬT TOÁN:
B1: Nhập vào 3 số a b c
B2: Tìm GTLN, GTNN của 3 số
B3: Lấy tôngr của 3 số trừ đi cho giá trị lớn nhất, nhỏ nhất
B4: In ra kết quả.
*/
#include <stdio.h>
#include <math.h>
long so_trung_gian(long a, long b, long c) {
    long min, max;
    max = a > b && a > c ? a : (b > c ? b:c);
    min = a < b && a < c ? a : (b < c ? b:c);
    return ((a + b + c) - min - max) ;
} 
int main() {
    long a, b, c;
    printf("Nhap 3 so a, b, c: ");
    scanf("%ld %ld %ld", &a, &b, &c);
    if (a == b || a == c || b == c) {
        printf("Khong co so trung gian\n");
        return 1;
    }

    printf("So trung gian cua 3 so %ld, %ld, %ld la: %ld",a, b, c, so_trung_gian(a, b, c));
    return 0;
}