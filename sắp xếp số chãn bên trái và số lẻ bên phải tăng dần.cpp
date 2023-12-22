//viết hàm sắp xếp các phần tử chẵn nằm bên trái theo thứ tự tăng dần còn các phần tử lẻ nằm bên phải theo thứ tự tăng dần
/*
Dùng hai mảng riêng biệt để lưu trữ các số chẵn và lẻ, sau đó sắp xếp chúng riêng rẽ
*/
#include <stdio.h>
void sap_xep(int n, int arr[100]) {
	int chan[100], le[100], so_chan = 0, so_le = 0;
	// đếm số chẵn, lẻ
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			chan[so_chan++] = arr[i];
		}
		else {
			le[so_le++] = arr[i];
		}
	}

	// sắp xếp số chẵn
	for (int i = 0; i < so_chan; i++) {
		for (int j = i + 1; j < so_chan; j++) {
			if (chan[i] > chan[j]) {
				int temp = chan[j];
				chan[j] = chan[i];
				chan[i] = temp; 
			}
		}
	}
	// sắp xếp số lẻ
	for (int i = 0; i < so_le; i++) {
		for (int j = i + 1; j < so_le; j++) {
			if (le[i] > le[j]) {
				int temp = le[j];
				le[j] = le[i];
				le[i] = temp;
			}
		}
	}
	// gộp số chãn và số lẻ lại
	for (int i = 0; i < so_chan; i++) {
		arr[i] = chan[i];
	}
	for (int i = 0; i < so_le; i++) {
		arr[so_chan + i] = le[i];
	}
}
int main() {
	int n; 
	int arr[100];
	printf("NHap so phan tu cua day so: ");
	scanf_s("%d", &n);
	printf("Nhap day so: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	sap_xep(n, arr);
	printf("Day so sau khi sap xep la: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}