// đếm có bao nhiêu chữ số trong cuối cùng của tích các số tự nhiên (liên tiếp hoặc rời rạc)
#include <stdio.h>
#include <math.h>
#include <malloc.h>
void dem_so_0(long n1, long n2) {
    long count = 0;
    for (long i = n1; i <= n2; i++) {
        long j = i;
        if (i % 5 == 0 && i != 0) { 
            // nếu tìm được số chia hết cho 5 và khác 0 trong đoạn thì tăng biến đếm lên 1, rồi sau đó lấy số đó chia cho 5,
            // rồi tiếp tục đếm số 5 đến khi nào điều kiện của vòng lặp sai thì thôi.
            while (j % 5 == 0 && j != 0)
            {
                count++;
                j /= 5;
            }
        }
    }
    printf("So chu so 0 tan cung cua tich cac so tu nhien lien tiep tu %ld den %ld la: %ld\n", n1, n2, count);
}
int main() {
    long n1, n2; // khởi tạo hai khoảng cần tính
    printf("Nhap so dau tien: ");
    scanf("%ld", &n1);
    printf("Nhap so thu hai: ");
    scanf("%ld", &n2);
    dem_so_0(n1, n2);
    return 0;
}