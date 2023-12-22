 // dem co bao nhieu so trong mang trung voi so da cho ban dau
 #include<iostream>
using namespace std;

int main() {
    int n, target; // target: số cần xét với các phần tử trong mảng
    int arr[1000];
    cout << "Nhap so luong so co trong mang: ";
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Nhap so muc tieu: ";
    cin >> target;

    int count = 0; // biến đếm
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "So luong so trong mang trung voi so muc tieu la: " << count << endl;
    
    return 0;
}
