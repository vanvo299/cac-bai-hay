#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacHai(float a, float b, float c) {
    if (a == 0) {
        printf ("Phuong trinh khong ton tai!!!");
        return;
    }
    float delta;
    delta = pow(b,2) - (4 * a * c);
    float x1, x2;
    if (delta > 0) {
         printf("Phuong trinh co hai nghiem phan biet la \n");
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("x = %.1f\n", x1);
        printf("x= %.1f\n", x2);
    }
    if (delta == 0) {
        printf("Phuong trinh co nghiem kep \n");
         x1 = x2 = (-b)/(2*a);
        printf("x = %.1f\n", x1);
    }
    if (delta < 0) {
        printf("Phuong trinh vo nghiem!!");
    }
}

int main() {
    float a, b, c;
    printf("Nhap vao cac he so cua phuong trinh bac hai: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    giaiPhuongTrinhBacHai(a, b, c);
    return 0;
}

