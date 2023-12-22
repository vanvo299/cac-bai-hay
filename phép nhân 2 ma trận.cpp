//Bài 4. Viết chương trình nhân 2 ma trận (mxn)
#include <stdio.h>
int main() {
    int m, n; // khởi tạo số hàng, số cột của ma trận A, m: số hàng, n: số cột
    int mtr_A[100][100]; // Cấp phát bộ nhớ cho mảng
    printf("Nhap so hang cua ma tran A: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran A: ");
    scanf("%d", &n);
    // Nhập ma trận A
    printf("Nhap ma tran A: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("mtr_A[%d][%d] = ", i, j);
            scanf("%d", &mtr_A[i][j]);
        }
    }
    
    int a, b; // khởi tạo số hàng, số cột của ma trận B, a: số hàng, b: số cột
    int mtr_B[100][100]; // Cấp phát bộ nhớ cho mảng
    printf("Nhap so hang cua ma tran B: ");
    scanf("%d", &a);
    printf("Nhap so cot cua ma tran B: ");
    scanf("%d", &b);
    if (n != a) {
        printf("So cot cua ma tran A phai bang so hang cua ma tran B!!!\n");
        return 1;
    }
    // Nhập ma trận B
    printf("Nhap ma tran B: \n");
    for (int i = 0; i< a; i++) {
        for (int j = 0; j < b; j++) {
            printf("mtr_B[%d][%d] = ", a, b);
            scanf("%d", &mtr_B[i][j]);
        }
    }

    // Xuat ma tran A va B
    printf("Ma tran A: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           printf("%d ", mtr_A[i][j]);
        }
        printf("\n"); 
    }

    printf("Ma tran B: \n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", mtr_B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Nhân hai ma trận A và B
    int mtr_C[100][100]; // Khởi tạo ma trận C để lưu ma trận A * ma trận B
    for (int i = 0; i < m; i++) { // duyệt qua từng hàng của ma trận A (cũng là của ma trận kết quả C)
        for (int j = 0; j < b; j++) { // duyệt qua từng cột của ma trận B (cũng là của ma trận kết quả C)
           mtr_C[i][j] = 0; 
           for (int k = 0; k < n; k++) { // duyệt qua từng cột cũng ma trận A và từng hàng của ma trận B (vì số cột của ma trận A và số cột của ma trận B bằng nhau)
            mtr_C[i][j] += mtr_A[i][k] * mtr_B[k][j];
           }
        }
    }
    //In kết quả của phép nhân ma trận A và ma trận B 
        printf("mtr_A * mtr_B = \n");
    for(int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", mtr_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}