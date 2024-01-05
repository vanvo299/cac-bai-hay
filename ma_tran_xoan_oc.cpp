// Viết chương trình tạo ra ma trận vuông cấp n, sao cho ma trận có dạng xoáy ốc
/*
VD:  1   2   3  4 
    12  13  14  5
    11  16  15  6
    10  9   8   7
*/
#include <stdio.h>
void ma_tran_xoan_oc(int n, int a[10][10])
{
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    int dem = 1;
    while(dem <= n * n) {
        // xây dựng cạnh trên: có hàng là h1, cột từ c1 đến c2
        for (int i = c1; i <= c2; i++) {
            a[h1][i] = dem++;
        }
        ++h1;
        // xây dựng cạnh phải: có cột là c2, hàng từ h1 + 1 đến hàng h2
        for (int i = h1; i <= h2; i++) {
            a[i][c2] = dem++;
        } 
        --c2;
        // xây dựng cạnh dưới: có hàng là h2, cột từ c2 - 1 đến c1
        for (int i = c2; i >= c1; i--) {
            a[h2][i] = dem++;
        }
        --h2;
        // xây dựng cạnh trái: có cột là c1, hàng từ h2 - 1 đến h1 + 1
        for (int i = h2; i >= h1; i--) {
            a[i][c1] = dem++;
        }
        ++c1;
    }
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }

}
int main()
{
    int n;
    int a[10][10];
    printf("Nhap cap cua ma tran: ");
    scanf("%d", &n);
    ma_tran_xoan_oc(n, a);

    return 0;
}