#include <stdio.h>
#include <math.h>


void doi(float n, int c, int A[], int B[], int *a, int *b)
{
    if (c<2)
    {
        printf("Khong doi duoc");
        return;
    }
    else
    {
        int isNegative = 0;
        if (n < 0) {
            isNegative = 1;
            n = -n;
        }
        A[0] = 0;
        double nguyen = 0;
        double thapphan = modf(n, &nguyen);
        int i = 0;
        while ((int)nguyen != 0)
        {
            A[i] = (int)nguyen%c;
            nguyen = (int)nguyen/c;
            i++;
        }
        *a = i;
        int k = 0;
        while (thapphan != 0)
        {
            thapphan = thapphan * c;
            double nguyen2 = 0;
            thapphan = modf(thapphan, &nguyen2);
            B[k] = (int)nguyen2;
            k++;
            if (k==20)
            {
                break;
            }
        }
        *b = k;
        if (isNegative) {
            printf("-");
        }
    }
}

int main(void)
{
    char C[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    float n = 0;
    printf("Nhap so can doi: ");
    scanf("%f", &n);
    int c = 0;
    while (c<2)
    {
        printf("Nhap he co so can doi: ");
        scanf("%d", &c);
    }
    int A[100];
    int B[100];
    int a, b;
    doi(n, c, A, B, &a, &b);
    for (int i = a-1; i>=0 ; i--)
    {
        printf("%c", C[A[i]]);
    }
    if (b!=0)
    {
        printf(".");
        for (int i = 0; i<b; i++)
        {
            printf("%c", C[B[i]]);
        }
    }
    printf("\n");
}
