// Đếm số lượng số nguyên tố trong mảng 2 chiều 
#include <iostream>
#include <cmath>
using namespace std;
//Kiểm tra số nguyên tố
bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return n > 1;
}
void nhap_mang(int a[205][205], int n, int m) { // n: số hàng, m: số cột
	cout << "Nhap mang: ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

void xuat_mang(int a[205][205], int n, int m) {
	cout << "Mang da nhap la: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

int dem_so_nguyen_to(int a[205][205], int n, int m) {
	int dem = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (nt(a[i][j])) {
				++dem;
			}
		}
	} 
	return dem;
}
int main() {
	int n, m; // n: số hàng, m: số cột
	int a[205][205]; // 205 x 205
	cout << "Nhap so hang: ";
	cin >> n;
	cout << "Nhap so cot: ";
	cin >> m;

	nhap_mang(a, n, m);
	xuat_mang(a, n, m);
	cout << "So luong so nguyen to co trong mang la: " << dem_so_nguyen_to(a, n, m);

	return 0;
}