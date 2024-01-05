// Viết chương trình tính định thức của ma trận vuông cấp n
#include <stdio.h>
void Nhap_ma_tran(float a[10][10], float n) 
{
    printf("Nhap ma tran vuong cap %d: \n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}
void Xuat_ma_tran(float a[10][10], float n) 
{
    printf("Ma tran vuong cap %d sau khi nhap la: \n", n);
    for (int i  = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.0f  ", a[i][j]);
        }
        printf("\n");
    }
}
int tinhDet(float a[10][10], float n) 
{
    if (n == 1) return a[0][0]; // nếu ma trận chỉ có một phần tử, trả về giá trị phần tử đó
   float det = 0; // khởi tạo giá trị định thức
    float b[10][10]; // ma trậnn phụ để lưu ma trận con
    for (int k = 0; k < n; k++) { // duyệt  qua từng cột của hàng đầu tiên
        int i = 0, j = 0; // khởi tạo chỉ số cho ma trận con
        for (int hang = 1; hang < n; hang++) { // bắt đầu từ hàng thứ hai
            for (int cot = 0; cot < n; cot++) { // duyệt qua từng cột
                if (cot == k) { // Bỏ qua cột k
                    continue;
                }
                b[i][j++] = a[hang][cot]; // gán giá trị vào ma trận con
                if (j == n - 1) { // nếu đã duyệt hết cột, chuyển sang hàng mới
                    j = 0;
                    i++;
                }
            }
        }
        // Tính định thức sử dụng công thức của Laplace
        det += (k % 2 == 0 ? 1 : -1) * a[0][k] * tinhDet(b, n - 1);
    }
    return det; //Trả về giá trị định thức
}

void ma_tran_nghich_dao(float a[10][10], float n)
{
    float b[10][10];

    // b là ma trận được dùng để lưu ma trận nghịch đảo
    // khởi tạo b là ma trận đơn vị
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = (i == j) ? 1 : 0;
        }
    }

    //chia mỗi dòng của ma trận a và b cho phần tử chính (pivot) của dòng đó,
    // để biến đổi ma trận a thành ma trận có các phần tử chính bằng 1 
    for (int i = 0; i < n; i++) { // duyệt qua từng hàng của ma trận
        float pivot = a[i][i]; // các phần tử trên đường chéo chính
        for (int j = 0; j < n; j++) {
            //tất cả phần tử trong hàng hiện tại của hai ma trận a và b đều được chia cho pivot.
            // Mục đích là để biến đổi phần tử trên đường chéo chính của ma trận a thành 1.
            a[i][j] /= pivot;
            b[i][j] /= pivot;
        }
        for (int j = 0; j < n; j++) { // duyệt qua các hàng khác của ma trận
            if (i != j) {
                float ty_le = a[j][i];// tỷ lệ này được tính dựa trên phần tử hiện cảu ma trận a nằm trên cùng một cột với pivot
                for (int k = 0; k < n; k++) {
                    // Tất cả các phần tử trong hàng hiện tại của cả hai ma trận a và b đều trừ đi tỷ lệ nhân với phần tử 
                    // tương ứng trong hàng pivot. Mục đích để biến đổi tất cả các phần tử nằm ngoài đường chéo chính của ma trận a thành 0
                    a[j][k] -= ty_le * a[i][k];
                    b[j][k] -= ty_le * b[i][k];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f  ", b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    float n; // khởi tạo cấp của ma trận vuông cấp n
    float a[10][10];
    printf("Nhap cap cua ma tran vuong: ");
    scanf("%f", &n);
    Nhap_ma_tran(a, n);
    Xuat_ma_tran(a, n);
    // tính định thức của ma trận
    printf("det(a) = %d\n", tinhDet(a, n));
    printf("Ma tran nghich dao cua ma tran a la: \n");
    ma_tran_nghich_dao(a, n);
    
    return 0;
}