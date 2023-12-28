// Viết chương trình nhập số tự nhiên từ 0 đến 9.
// Hỏi bao nhiêu số có 4 chữ số: + 1 phần nguyên, 3 phần thập phân
//                               + 2 phần nguyên, 2 phần thập phân
//                               + 3 phần nguyên, 1 phần thập phân
#include <stdio.h>
#include <math.h>
void dem_01_03(long num[]) {
	int count_01_03 = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i == j) continue;
			else for (int k = 0; k < 4; k++) {
				if (i == k || j == k) continue;
				else for (int l = 0; l < 4; l++) {
					if (i == l || j == l || k == l) continue;
					else {
						if (num[l] == 0) continue;
						else {
							printf("\n%d.%d%d%d", num[i], num[j], num[k], num[l]);
							count_01_03++;
						}
					}
				}
			} 
		}
	}
	printf("\n Co %d so thap phan co 4 chu so trong do co 1 chu so phan nguyen va 3 chu so phan thap phan\n", count_01_03);
}

int main() {
	long num[4];
	printf("Nhap vao 4 so tu nhien (tu 0 den 9) khong trung nhau: ");
	for (int i = 0; i < 4; i++) {
		scanf("%ld", &num[i]);
		for (int j= 0; j < i; j++) {
			if (num[i] == num[j]) {
				printf("Vui long nhap cac so khong trung nhau!\n");
				return 1;
			}
		}
	}
	dem_01_03(num);


	return 0;
}