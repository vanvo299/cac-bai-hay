#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <cctype>

void Nhap(char A[][100], int n)
{
	printf("Nhap phan tu trong day: ");
	for (int i = 0; i < n; i++) {
		scanf("%s", &A[i]);
	}
}
void Xuat(char A[][100], int n)
{
	printf("Day so sau khi nhap la: ");
	for (int i = 0; i < n; i++) {
		printf("%s ", A[i]);
	}
}
int KT_so_nguyen(char* str)
{
	for (int i = 0; i < strlen(str); i++) {
		if (!isdigit(str[i])) { // isdigit dùng để kiểm tra kí tự có phải là một số hay không
			return 0;
		}
	} return 1;
}
int KT_so_nguyen_to(int m)
{
	if (m < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(m); i++) {
		if (m % i == 0) {
			return 1;
		}
	} return 0;
}
int Xoa_nguyen_to(char A[][100], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++) {
		int num = atoi(A[i]);
		if (!KT_so_nguyen(A[i]) || KT_so_nguyen(A[i]) && KT_so_nguyen_to(num)) {
			strcpy(A[j], A[i]);
			j++;
		}
	} return j;
}
int main()
{
	char A[100][100];
	int n;
	printf("Nhap so luong phan tu co trong day: ");
	scanf("%d", &n);
	Nhap(A, n);
	Xuat(A, n);

	n = Xoa_nguyen_to(A, n);
	printf("\nDay so sau khi xoa di xoa nguyen to la: ");
	for (int i = 0; i < n; i++) {
		printf("%s ", A[i]);
	}
return 0;
}