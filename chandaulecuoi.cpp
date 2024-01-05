//viết hàm sắp xếp các phần tử chẵn nằm bên trái theo thứ tự tăng dần còn các phần tử lẻ nằm bên phải theo thứ tự tăng dần
/*
Dùng hai mảng riêng biệt để lưu trữ các số chẵn và lẻ, sau đó sắp xếp chúng riêng rẽ
*/
#include <stdio.h>
void nhap_mang(int a[], int b[], int n, int m)
{
	printf("Nhap mang a: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Nhap mang b: ");
	for (int i = 0; i < m; i++) {
		scanf("%d", &b[i]);
	}
}


void sapxep(int a[], int b[], int c[], int n, int m)
{
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < m; i++) {
		c[n + i] = b[i];
	}
	int chan[100], le[100], so_chan = 0, so_le = 0;
	// đếm số chẵn, lẻ
	for (int i = 0; i < n + m; i++) {
		if (c[i] % 2 == 0) {
			chan[so_chan++] = c[i];
		}
		else {
			le[so_le++] = c[i];
		}
	}
	// gộp số chãn và số lẻ lại
	for (int i = 0; i < so_chan; i++) {
		c[i] = chan[i];
	}
	for (int i = 0; i < so_le; i++) {
		c[so_chan + i] = le[i];
	}
}


int main() {
	int n, m; // n: kích thước mảng a, m: kích thước mảng b
	int a[100], b[100], c[100];
	printf("Nhap so phan tu cua mang a: ");
	scanf("%d", &n);
	printf("Nhap so luong phan tu cua mang b: ");
	scanf("%d", &m);
	nhap_mang(a, b, n, m);
	sapxep(a, b, c, n, m);
	printf("Day so sau khi sap xep la: ");
	for (int i = 0; i < n + m; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}