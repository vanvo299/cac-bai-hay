#include <stdio.h>
#include <math.h>
void S1(int n, int *sum_1) {
    *sum_1 = 0;
    for (int i = 1; i <= n; i++) {
        *sum_1 += pow(i, 2); 
    }
}
void S2(int n, float *sum_2) {
    *sum_2 = 0;
    for (int i = 1; i <= n; i++) {
        *sum_2 += 1.0 / (2*i -1); 
    }
}
void S3(int n, int *factorial) {
    *factorial = 1;
    for (int i = 1; i <= n; i++) {
        *factorial *= i;
    }
}
void S4(int n, int *sum_4) {
    *sum_4 = 0;
    int sum_3;
    for (int i = 1; i <= n; i++) {
        S3(i, &sum_3);
        *sum_4 += sum_3;
    }
}
void S5(int n, float *sum_5) {
    *sum_5 = 5;
    for (int i = 0; i <= n; i++) {
        *sum_5 += (float)i / ((i + 1) * (i + 2));
    }
}
void S6(int n, float *sum_6) {
    *sum_6 = 0;
    for (int i = 0; i <= n; i++) {
        *sum_6 += sqrt(i);
    }
}
void S7(int n, int *sum_7) {
    *sum_7 = 0;
    int sum_3;
    for (int i = 1; i <= n; i++) {
        S3(i, &sum_3);
        *sum_7 +=  pow(-1, i + 1) * sum_3;
    }
}
void S8(int n, int *p) {
    *p = 1;
   if(n % 2 != 0) {
    for (int i = 1; i <= n; i+=2) {
        *p *= i;
    }
   } else {
    for (int i = 2; i <= n; i+=2) {
        *p *= i;
    }
   }
}

int main() {
    int n; 
    int sum_1, sum_3, sum_4, sum_7, p;
    float sum_2, sum_5, sum_6;

    printf("Nhap n: ");
    scanf("%d", &n);
    S1(n, &sum_1);
    printf("\nS1 = %d", sum_1);
    S2(n, &sum_2);
    printf("\nS2 = %f", sum_2);
    S3(n, &sum_3);
    printf("\nS3 = %d", sum_3);
    S4(n, &sum_4);
    printf("\nS4 = %d", sum_4);
    S5(n, &sum_5);
    printf("\nS5 = %f", sum_5);
    S6(n, &sum_6);
    printf("\nS6 = %f", sum_6);
    S7(n, &sum_7);
    printf("\nS7 = %d", sum_7);
    S8(n, &p);
    printf("\nS8 = %d", p);
    return 0;
}