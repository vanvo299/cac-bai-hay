#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacBon(float a, float b, float c) {
    float x1, x2, x3, x4, t1, t2, t, delta;
    if (a == 0) {
        printf("Khong hop le!! Vui long nhap lai a!!\n");
        return;
    }
    delta = pow(b, 2) - 4*a*c;
    if (delta < 0) {
        printf("Phuong trinh bac 4 trung phuong %.0fx^4 + %.0fx^2 + %.0f vo nghiem\n", a, b, c);
    }
    else if (delta == 0) {
        t = (-b)/(2*a);
        if (t == 0) {
            printf("Phuong trinh bac 4 trung phuong  %.0fx^4 + %.0fx^2 + %.0f co 1 nghiem x = %.5f\n", a, b, c, t);
        } 
        else if(t > 0) {
            x1 = sqrt(t);
            x2 = -sqrt(t);
            printf("phuong trinh bac 4 trung phuong  %.0fx^4 + %.0fx^2 + %.0f co nghiem la x = %.5f, x = %.5f\n", a, b, c, x1, x2);
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    }
    else {
        t1 = (-b + sqrt(delta))/(2*a);
        t2 = (-b - sqrt(delta))/(2*a);
        if (t1 > 0 && t2 > 0) {
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            x3 = sqrt(t2);
            x4 = -sqrt(t2);
            printf("Phuong trinh bac 4 trung phuong %.0fx^4 + %.0fx^2 + %.0f co nghiem x = %.5f,  x = %.5f,  x = %.5f,  x = %.5f\n", a, b, c, x1, x2, x3, x4);
        }
        else if (t1 > 0 && t2 < 0) {
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            printf("Phuong trinh bac 4 trung phuong %.0fx^4 + %.0fx^2 + %.0f co nghiem x = %.5f,  x = %.5f\n", a, b, c, x1, x2);
        }
        else if(t1 < 0 && t2 > 0) {
            x3 = sqrt(t2);
            x4 = -sqrt(t2);
            printf("Phuong trinh bac 4 trung phuong %.0fx^4 + %.0fx^2 + %.0f co nghiem x = %.5f,  x = %.5f\n", a, b, c, x3, x4);
        }
        else if (t1 < 0 && t2 < 0) {
            printf("Phuong trinh bac 4 trung phuong %.0fx^4 + %.0fx^2 + %.0f vo nghiem", a, b, c);
        }
    }
}

int main() {
    float a, b, c;
    printf("Nhap he so cua phuong trinh: ");
    scanf("%f %f %f", &a, &b, &c);
    giaiPhuongTrinhBacBon(a, b, c);
    return 0;
}
