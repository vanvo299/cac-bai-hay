#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacHai(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2f\n", -c/b);
        }
        return;
    }
    float delta = b*b - 4*a*c;
    float x1, x2;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }
}

int main() {
    float a, b, c;
    printf("Nhap he so a, b va c cua phuong trinh bac hai: ");
    scanf("%f %f %f", &a, &b, &c);
    giaiPhuongTrinhBacHai(a, b, c);
    return 0;
}
