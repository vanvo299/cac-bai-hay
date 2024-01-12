#include <stdio.h>
#include <math.h>
void dem_so_0_1(long n1, long n2)
{
	long count = 0;
	for (int i = n1; i <= n2; i++) {
		long j = i;
		if (i % 5 == 0 && i != 0) {
			while (j % 5 == 0 && j != 0) {
				count++;
				j /= 5;
			}
		}
	}
	printf("\nCo %ld so 0 tan cung cua tich cac so tu nhien tu %d den %d", count, n1, n2);
}

void dem_so_0_2(long a[], long n)
{
	long count_2 = 0, count_5 = 0;
	for (int i = 0; i < n; i++) {
		long num = a[i];
		while (num % 2 == 0 && num != 0) {
			count_2++;
			num /= 2;
		}
		while (num % 5 == 0 && num != 0) {
			count_5++;
			num /= 5;
		}
	}
	if (count_2 < count_5) {
		printf("\nCo %ld so 0 tan cung cua tich cac so tu nhien trong day", count_2);
	} else if(count_2 > count_5) {
		printf("\nCo %ld so 0 tan cung cua tich cac so tu nhien trong day", count_5);
	}
	else printf("\nCo %ld so 0 tan cung cua tich cac so tu nhien trong day", count_2);
}
int main()
{
	int m;
	printf("Nhap m (chi nhap 1 hoac 2): ");
	scanf("%d", &m);
	if (!(m == 1 || m == 2)) {
		printf("\nChi duoc nhap 1 va 2, Vui long nhap lai");
		return 1;
	}
	switch (m)
	{
	case 1:
		long n1, n2;
		printf("Nhap n1: ");
		scanf("%ld", &n1);
		printf("Nhap n2: ");
		scanf("%ld", &n2);
		if (n1 == 0 || n2 == 0 || n1 * n2 <= 0) {
			printf("\nTich cac chu so tu %ld den %ld bang 0", n1, n2);
			return 1;
		}
		dem_so_0_1(n1, n2);
		break;
	case 2:
		long a[50], n;
		printf("Nhap n: ");
		scanf("%ld", &n);
		printf("Nhap mang: ");
		for (int i = 0; i < n; i++) {
			scanf("%ld", &a[i]);
		}
		printf("Mang sau khi nhap la: ");
		for (int i = 0; i < n; i++) {
			printf("%ld ", a[i]);
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == 0) {
				printf("\nTich cac chu so trong day bang 0");
				return 1;
			}
		}
		dem_so_0_2(a, n);
		break;
	}

	return 0;
}