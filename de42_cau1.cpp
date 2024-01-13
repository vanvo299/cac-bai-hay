// ĐỀ 42
/*
Câu 1: Viết chương trình sử dụng hàm nhập số n từ bàn phím và đổi sang cơ số c, cơ số c cũng nhập từ bàn phím ?
 In kết quả đổi sang cơ số c ra màn hình
*/
#include <stdio.h>
#include <math.h>
void chuyen_co_so(int n, int c)
{
    long A[50]; 
    int i = 0;
    while(n != 0) {
        A[i++] = n % c;
        n /= c;
    } 
    printf("Ket qua cua phep chuyen sang he co so %d la: ", c);
    for (int j = i - 1; j >= 0; j--) {
        if (A[j] < 10) {
          printf("%d", A[j]); 
        } else {
            printf("%c", A[j] + 55); // chuyển số 10-15 thành chữ A-F
        }
    }
}
int main()
{
    int n, c;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap co so c: "); scanf("%d", &c);
    if (c < 2 || c > 36) {
        printf("Vui long nhap lai he co so khac !\n");
        return 1;
    }
    chuyen_co_so(n, c);

    return 0;
}