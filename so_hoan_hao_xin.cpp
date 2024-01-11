// ĐỀ 3
/*
Câu 2: Viết chương trình có sử dụng hàm:
a. Viết chương trình nhập mảng một chiều A với n phần tử (n >= 10). Xuất mảng A ra màn hình
b. Xóa các số hoàn hảo trong A trên, xuất lại mảng A sau khi xóa các số hoàn hảo
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Nhap_xuat(char A[][100], int n)
{
        printf("Nhap cac so can kiem tra: ");
    for (int i = 0; i < n; i++) {
        scanf("%s", &A[i]);
    }
    printf("Cac so sau khi nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", A[i]);
    }

}
// Hàm kiểm tra số nguyên
int KT_so_nguyen(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.') {
            return 0;
        }
    }
    return 1;
}
// Hàm kiểm tra số hoàn hảo
int KT_so_hoan_hao(int m)
{
    int Tong_uoc = 0;
    for (int i = 1; i < m; i++) {
        if (m % i == 0) {
            Tong_uoc += i;
        }
    }
    if (Tong_uoc == m) return 1;
    return 0;
}
// Hàm xóa số nguyên là số hoàn hảo trong mảng
int xoa_so_hoan_hao(char A[][100], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        int num = atoi(A[i]);
        if (!KT_so_nguyen(A[i]) || (KT_so_nguyen(A[i]) && !KT_so_hoan_hao(num))) {
            strcpy(A[j], A[i]);
            j++;
        }
    }
    return j; // Trả về số lượng phần tử sau khi xóa
}

int main() {
    char A[100][100];
    int n;
    printf("Nhap so luong phan tu co trong day: ");
    scanf("%d", &n);
    Nhap_xuat(A, n);

    n = xoa_so_hoan_hao(A, n);

    printf("\nMang sau khi xoa so nguyen la so hoan hao: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", A[i]);
    }

    return 0;
}
