// nhập từ bàn phím vào một dãy số, sau đó đảo ngược dãy đó
// vd: nhập 1 2 3 4 5
// output: 5 4 3 2 1  

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int arr[100];
    int n;
    cout << "nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Nhap phan tu: ";
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[n - i - 1];
        arr[n - i - 1] = arr[i];
        arr[i] = temp;
    }

    cout << "day so sau khi dao la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
