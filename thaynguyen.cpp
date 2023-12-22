// Viết chương trình nhập số tự nhiên từ 0 đến 9.
// Hỏi bao nhiêu số có 4 chữ số: + 1 phần nguyên, 3 phần thập phân
//                               + 2 phần nguyên, 2 phần thập phân
//                               + 3 phần nguyên, 1 phần thập phân
#include <stdio.h>
#include <math.h>
int main() {
	// 1 phần nguyên, 3 phần thập phân
	int count_1_3 = 0;
	// 2 phần nguyên, 2 phần thập phân
	int count_2_2 = 0;
	// 3 phần nguyên,1 phần thập phân
	int count_3_1 = 0;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= 9; k++) {
				for (int z = 1; z <= 9; z++) {
					float number_1_3 = i + j * pow(10, -1) + k * pow(10, -2) + z * pow(10, -3);
					float number_2_2 = i * 10 + j + k * pow(10, -1) + z * pow(10, -2);
					float number_3_1 = i * 100 + j * 10 + k + z * pow(10, -1);
					if (number_1_3 > 0 && number_1_3 < 10) {
						count_1_3++;
					}
					if (number_2_2 >= 10 && number_2_2 < 100) {
						count_2_2++;
					}
					if (number_3_1 > 100 && number_3_1 < 1000) {
						count_3_1++;
					}
				}
			}
		}
	}
	printf("So luong so co 4 chu so trong do co 1 phan nguyen, 3 phan thap phan la: %d", count_1_3);
	printf("\nSo luong so co 4 chu so trong do co 2 phan nguyen, 2 phan thap phan la: %d", count_2_2);
	printf("\nSo luong so co 4 chu so trong do co 2 phan nguyen, 2 phan thap phan la: %d", count_3_1);
	

	return 0;
}