#include <stdio.h>
#include <math.h>

void KT_Tam_Giac(float a, float b, float c)
{
    if ((a + b) > c && (b + c) > a && (a + c) > b) {
        printf("Ba canh vua nhap la 3 canh cua mot tam giac\n");
    }
    else printf("Ba canh vua nhap khong phai la 3 canh cua mot tam giac\n");
}

void Tam_giac(float a, float b, float c)
{
    if (a == b && b == c) {
        printf("Ba canh vua nhap la 3 canh cua tam giac deu\n");
        return; 
    } else if (a == b || b == c || a == c) {
    	if ((a == b || b == c || a == c) && !(pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))) {
    		  printf("Ba canh vua nhap la 3 canh cua tam giac vuong can\n");
    		  return; 
		} else {
			printf("Ba canh vua nhap la 3 canh cua tam giac can\n");
            return; 
		}   
    }
    if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2)) {
          printf("Ba canh vua nhap la 3 canh cua tam giac vuong\n");
            return; 
    } 
}

int main()
{
    float a, b, c;
    printf("Nhap canh thu nhat: "); scanf("%f", &a);
    printf("Nhap canh thu hai: "); scanf("%f", &b);
    printf("Nhap canh thu ba: "); scanf("%f", &c);
    KT_Tam_Giac(a, b, c);
    Tam_giac(a, b, c);
    return 0;
}
