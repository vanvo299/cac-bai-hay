/* 
Câu 2: (6 điểm): Viết chương trình có sử dụng hàm
a. Viết chương trình nhập hai mảng một chiều A và B.Xuất mảng A và B ra màn hình
(2điểm)
b. Nối mảng A vào B (Không dùng mảng phụ và không sắp xếp trước và sau)đảm bảo
thứ tự tăng dần.Xuất mảng sau khi nối ra màn hình.(4 điểm)
*/
#include <stdio.h>
#include <math.h>
void Nhap(int a, int b, int A[], int B[])
{
	printf("Nhap mang A: ");
	for (int i = 0; i < a; i++) {
		scanf("%d", &A[i]);
	}
	printf("Nhap mang B: ");
	for (int i = 0; i < b; i++) {
		scanf("%d", &B[i]);
	}
}
void Xuat(int a, int b, int A[], int B[])
{
	printf("Mang A sau khi nhap la: ");
	for (int i = 0; i < a; i++) {
		printf("%d ", A[i]);
	}
	printf("\nMang B sau khi nhap la: ");
	for (int i = 0; i < b; i++) {
		printf("%d ", B[i]);
	}
}
void hoanvi(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void noimang(int a, int b, int A[], int B[])
{
	for (int i = b; i < a + b; i++) {
		B[i] = 10000;
	}
    
	for (int i = 0; i < a + b; i++) {
		int mina = 10000;
		int posa = 0;
		for (int k = 0; k < a; k++) {
			if (A[k] < mina) {
				mina = A[k];
				posa = k;
			}
		}
		int minb = 10000;
		int posb = 0;
		for (int k = i; k < a + b; k++) {
			if (B[k] < minb) {
				minb = B[k];
				posb = k;
			}
		}
		if (mina >= minb) {
			hoanvi(&B[i], &B[posb]);
		}
		else hoanvi(&B[i], &A[posa]);
	}
	printf("\nMang sau khi noi la: ");
	for (int i = 0; i < a + b; i++) {
		printf("%d ", B[i]);
	}
}
int main()
{
	int a, b, A[100], B[100];
	printf("Nhap so luong phan tu mang A: ");
	scanf("%d", &a);
	printf("Nhap so luong phan tu mang B: ");
	scanf("%d", &b);
	Nhap(a, b, A, B);
	Xuat(a, b, A, B);
	noimang(a, b, A, B);
	return 0;
}