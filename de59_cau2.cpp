/* ĐỀ 59:
câu 2: Viết chương trình có sử dụng hàm:
a. Viết chương trình nhập hai mảng một chiều A và B. Xuất mảng A và B ra màn hình
b. Nối mảng A và B (Không được sắp xếp trước sau, không dùng mảng phụ) đảm bảo thứ tự tăng dần. Xuẩt mảng sau khi nối ra màn hình
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// a. Viết chương trình nhập hai mảng một chiều A và B. Xuất mảng A và B ra màn hình
void Nhap_xuat_mang(int A[], int B[], int size_A, int size_B) {
    printf("Nhap mang A: ");
    for (int i = 0; i < size_A; i++) {
       scanf("%d", &A[i]);
    }
    printf("Nhap mang B: ");
    for (int i = 0; i < size_B; i++) {
       scanf("%d", &B[i]);
    }

    printf("Mang A sau khi nhap: ");
    for (int i = 0; i < size_A; i++) {
        printf("%d ", A[i]);
    }
    printf("\nMang B sau khi nhap: ");
    for (int i = 0; i < size_B; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

// b. Nối mảng A và B (Không được sắp xếp trước sau, không dùng mảng phụ) đảm bảo thứ tự tăng dần. Xuẩt mảng sau khi nối ra màn hình
void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void merge(int A[], int B[], int size_A, int size_B)
{
    // đưa từng phần tử ở mảng A vào cuối mảng B, sau đó sắp xếp
    // sắp xếp xong thì tiếp tục đưa phần tử cuar mảng A vào, và sắp xếp tiếp, cho đến khi hết phần tử
    for (int i = 0; i < size_A; i++) {
        B[size_B++] = A[i];
    }
        for (int k = 0; k < size_B; k++) {
            for (int t = k + 1; t < size_B; t++) {
                if (B[t] < B[k]) {
                    hoanvi(&B[t], &B[k]);
                }
            }
        } 
    printf("Mang sau khi tron va sap xep la: ");
    for (int i = 0; i < size_B; i++) {
        printf("%d ", B[i]);
    }
}
int main()
{
    int size_A, size_B;
    int A[100], B[100];
    printf("Nhap so luong phan tu co trong mang A: "); scanf("%d", &size_A);
    printf("Nhap so luong phan tu co trong mang B: "); scanf("%d", &size_B);
    Nhap_xuat_mang(A, B, size_A, size_B);
    merge(A, B, size_A, size_B);
    return 0;
}