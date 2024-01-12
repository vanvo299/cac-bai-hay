#include <stdio.h>
#include <windows.h>
void setColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main()
{
	printf("BANG CUU CHUONG\n");
	for (int i = 1; i <= 10; i++) {
		setColor(1);
		for (int j = 2; j <= 10; j++) {
			printf("%d x %d = %d\t", j, i, i * j);
			setColor(j);
		}
		printf("\n");
	}
	return 0;
}