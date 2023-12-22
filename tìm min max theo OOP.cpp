#include <iostream>
using namespace std;
class ArrayCalculator {
public:
    static int maxOfArray(int arr[], int n) {
        int maxValue = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
    static double maxOfArray(double arr[], int n) {
        double maxValue = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
    static int minOfArray(int arr[], int n) {
        int minValue = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
            }
        }
        return minValue;
    }
    static double minOfArray(double arr[], int n) {
        double minValue = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] < minValue) {
                minValue = arr[i];
            }
        }
        return minValue;
    }
};
int main() {
    int intArray[] = { 23, 24, 6, 97, 56 };
    double doubleArray[] = { 1.4, 8.9, 3.6, 12.5, 25.4 };

    int intArraySize = sizeof(intArray) / sizeof(int);
    //tính kích thước của mảng intArray / tính kích thước của một phần tử kiểu int trong mảng.
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    // tác dụng tương tự
    // khai báo size để đảm bảo vòng lặp có thể hoạt động
    int intMaxValue = ArrayCalculator::maxOfArray(intArray, intArraySize);
    int intMinValue = ArrayCalculator::minOfArray(intArray, intArraySize);
    double doubleMaxValue = ArrayCalculator::maxOfArray(doubleArray, doubleArraySize);
    double doubleMinValue = ArrayCalculator::minOfArray(doubleArray, doubleArraySize);
    // tìm GTLN và GTNN của mảng
    cout << "Max value in intArray: " << intMaxValue << endl;
    cout << "Min value in intArray: " << intMinValue << endl;
    cout << "Max value in doubleArray: " << doubleMaxValue << endl;
    cout << "Min value in doubleArray: " << doubleMinValue << endl;

    return 0;
}