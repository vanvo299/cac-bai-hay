#include <stdio.h>
#include <string.h>
int KT_doi_xung(char c[])
{
	for (int i = 0; i < strlen(c) / 2; i++) {
		if (c[i] != c[strlen(c) - i - 1])
		return 1;
	} return 0;
}
int main()
{
	char c[50];
	printf("Nhap day: ");
	scanf("%s", &c);
	if (KT_doi_xung(c)) {
		printf("So da cho khong la so doi xung\n");
	} else printf("So da cho la so doi xung\n");
	return 0;
}