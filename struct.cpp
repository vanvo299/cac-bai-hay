// LÝ THUYẾT VỀ STRUCT
/* Khái niệm:  Cấu trúc hay struct trong ngôn ngữ lập trình C cho phép bạn tự định nghĩa
 kiểu dữ liệu mới cho mình, nhằm giải quyết các bài toán khi mà thông tin
 đối tượng bạn cần lưu trữ không thể chỉ sử dụng kiểu dữ liệu cơ bản.
 VD: Lưu thông tin của một sv có tên, mã sv, lớp, GPA... thì dùng struct
 */

 //XÂY DỰNG CHƯƠNG TRÌNH QUẢN LÝ SINH VIÊN KIỂU MENU
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct SinhVien {
    char ten[100];
    char lop[100];
    double gpa;
    double canNang;
    double chieuCao;
    double BMI;
};

typedef struct SinhVien SinhVien;
void tinh_BMI(SinhVien *x) {
    double chieuCao_meters = x->chieuCao / 100.0;
    x->BMI = x->canNang / pow(chieuCao_meters, 2);
}
// Nhap thong tin sinh vien va tra ve sinh vien sau khi nhap
void Nhap(SinhVien* x) {
    getchar();
    printf("Nhap ten: "); gets(x->ten);
    printf("Nhap lop: "); gets(x->lop);
    printf("Nhap gpa: "); scanf("%lf", &x->gpa);
    printf("Nhap can nang: "); scanf("%lf", &x->canNang);
    printf("Nhap chieu cao: "); scanf("%lf", &x->chieuCao);
}
// Hàm in thông tin sinh viên và giá tr? BMI
void in(SinhVien *x) {
    printf("Ten: %s\n", x->ten);
    printf("Lop: %s\n", x->lop);
    printf("GPA: %.2lf\n", x->gpa);
    printf("Can Nang: %.2lf kg\n", x->canNang);
    printf("Chieu Cao: %.2lf cm\n", x->chieuCao);
    tinh_BMI(x); 
    printf("BMI: %.2lf\n", x->BMI);
    printf("\n");
}
// sap xep, tim kiem, tim min max, trung binh....
void timkiem(SinhVien a[], int n, char name[])
{
    int find = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(name, a[i].ten) == 0) {
            in(&a[i]);
            find = 1;
        }
    }
    if (find == 0) {
        printf("Khong tim thay sinh vien\n");
    }
}

// In ra nhung sinh vien co diem gpa cao nhat
void maxgpa(SinhVien a[], int n)
{
    double max = 0;
    for (int i = 0; i < n; i++) {
        max = fmax(max, a[i].gpa);
    }
    printf("Thong tin cac sinh vien co diem gpa cao nhat: ");
    for (int i = 0; i < n; i++) {
        if (max == a[i].gpa) {
            in(&a[i]);
        }
    }
}
// xoa sinh vien theo ten
void xoaThongTin(SinhVien a[], int* n, char name[]) {
    for (int i = 0; i < *n; i++) {
        if (strcmp(a[i].ten, name) == 0) {
            for (int j = i; j < *n - 1; j++) {
                a[j] = a[j + 1];
            }
            (*n)--;
            break;
        }
    }
}

//Sap xep sinh vien theo gpa giam dan
void sapxep(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (a[max].gpa < a[j].gpa)
                max = j;
        }
        SinhVien temp = a[max];
        a[max] = a[i];
        a[i] = temp;
    }
}
// Sap xep quicksort
int cmp(const void* a, const void* b)
{
    SinhVien* x = (SinhVien*)a;
    SinhVien* y = (SinhVien*)b;
    if (y->gpa - x->gpa) return -1;
    else 
    return 1;
}
int main()
{
    SinhVien a[1000];
    int n;
    while (1) {
        printf("-------------------QUAN LY SINH VIEN-------------------\n\n");
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("3. Tim kiem sinh vien theo ten\n");
        printf("4. Liet ke sinh vien co diem cao nhat\n");
        printf("5. Xoa sinh vien theo ten\n");
        printf("6. Sap xep sinh vien theo gpa giam dan\n");
        // printf("7. Chi so BMI cua sinh vien \n");
        printf("0. Thoat !\n");
        printf("-------------------------------------------------------\n\n");
        printf("Nhap lua chon: ");
        int lc; scanf("%d", &lc);
        if (lc == 1) {
            printf("Nhap so luong sinh vien: "); scanf("%d", &n);
            for (int i = 1; i <= n; i++) {
                printf("Sinh vien %d : \n", i);
                Nhap(&a[i]);
            }
        }
        else if (lc == 2) {
            printf("Danh sach sinh vien: \n");
            for (int i = 1; i <= n; i++) {
                printf("Sinh vien %d : \n", i);
                in(&a[i]);
            }
        }
        else if (lc == 3) {
            char name[100];
            printf("Nhap ten sinh vien can tim kiem: ");
            getchar();
            gets(name);
            timkiem(a, n, name);
        }
        else if (lc == 4) {
            maxgpa(a, n);
        }
        else if (lc == 5) {
            char name[100];
            printf("Nhap ten danh sach sinh vien can tim kiem: "); \
                getchar();
            gets(name);
            xoaThongTin(a, &n, name);
        }
        else if (lc == 6) {
           //sapxep(a, n);
           qsort(a, n, sizeof(SinhVien), cmp);
        }
        else if (lc == 0) {
            break;
        }
    }
    return 0;
}