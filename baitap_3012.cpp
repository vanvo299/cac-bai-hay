/*
Viết chương trình có sử dụng hàm:
a. Nhập mảng 1 chiều n phần tử là số nguyên và xuất mảng
b. Xuất số nguyên tố trong mảng
c. Tính tổng số nguyên tố
d. Đảo mảng
e. Sắp xếp mảng theo giảm dần
f. PP quicksoft tự viết, PP Quicksoft của máy (quicksort bên mục 28TECH)
*/
#include <stdio.h>
#include <math.h>
void hoanvi(int *a, int *b) 
{
    int temp = *a;
    *a = *b; 
    *b = temp;
}
//a. Nhập mảng 1 chiều n phần tử là số nguyên và xuất mảng

void Nhap_xuat_mang(int arr[100], int *n) 
{
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", n);
    printf("Nhap phan tu trong mang (cac phan tu cach nhau bang khoang trang): ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nMang sau khi nhap la: ");
    for (int i = 0; i < *n; i++) {
        printf("%3d", arr[i]);
    }
}
// b. Xuất số nguyên tố trong mảng
bool KT_So_NT(int n) 
{
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    } return true;
}

void in_so_NT(int arr[100], int n) 
{
    for (int i = 0; i < n; i++) {
        if (KT_So_NT(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
}
// c. Tính tổng số nguyên tố
int Tong(int arr[100], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (KT_So_NT(arr[i])) {
            sum += arr[i];
        }
    } return sum;
}
// d. Đảo mảng
void Dao_mang(int arr[100], int n) 
{
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
// e. Sắp xếp mảng theo giảm dần
void Sap_xep(int arr[100], int *n) 
{
    int max_mang = arr[0];
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n; j++) {
            if (arr[j] > arr[j]) {
                hoanvi(&arr[j], &arr[i]);
            }
        }
    }
    printf("\nMang sap xep theo chieu giam dan la: ");
    for (int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
}
int main() {
    int n;
    int arr[100];
    Nhap_xuat_mang(arr, &n);
    printf("\nSo nguyen to co trong mang la: ");
    in_so_NT(arr, n);
    printf("\nTong cac so nguyen to la: %d", Tong(arr, n));
    printf("\nMang sau khi dao la: ");
    Dao_mang(arr, n);
    Sap_xep(arr, &n);

    return 0;
}
