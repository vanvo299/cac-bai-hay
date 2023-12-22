#include <stdio.h>
#include <math.h>
void sap_xep(float a[100], int n) {
	float b[100];
	int kich_thuoc_mang_b = 0;
	for (int i = 0; i < n; i++) {
		if (fmod(a[i], 2) == 0) {
			b[kich_thuoc_mang_b] = a[i];
			kich_thuoc_mang_b++;
		}
	}
	for (int i = 0; i < kich_thuoc_mang_b; i++) {
		for (int j = i + 1; j < kich_thuoc_mang_b; j++) {
			if(b[i] > b[j]) {
				float temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}
	for (int i = 0; i < kich_thuoc_mang_b; i++) {
		printf("%.0f ", b[i]);
	}
}
int main() {
	int n;
	float a[100], b[100];
	printf("Nhap n: ");
	scanf_s("%d", &n);
	printf("Nhap mang: \n");
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ",i);
		scanf_s("%f", &a[i]);
	}
	printf("Mang sau khi sap xep chan la: ");
	sap_xep(a, n);

	return 0;
}