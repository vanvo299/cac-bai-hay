// bai toan tinh khoang cach cua hai diem trong he toa do 2 chieu
#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x;
    double y;
public:
    Point() {

    }
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
    double getX() {
        return x;
    }
    void setX(double x) {
        this->x = x;
    }
    double getY() {
        return y;
    }
    void setY(double y) {
        this->y = y;
    }
    void setXY(double x, double y) {
        this->x = x;
        this->y = y;
    }
    double distance(double x, double y) {
        //distance la phuong thuc tra ve khoang cach cua doi tuong hien tai va diem co hoanh do x va tung do y
        //this -> x, this -> y : la doi tuong hien tai
        return sqrt((this->x - x) * (this->x - x) + (this->y - y) * (this->y - y));
    }
    double distance(Point another) {
     //phuong thuc tra ve doi tuong hien tai va doi tuong another (another cung la mot doi tuong thuoc lop Point
        return distance(another.getX(), another.getY());
    }
};
int main() {
    Point p1(1.5, 6.7);
    Point p2(2.8, 3.2);
    cout << p1.distance(p2) << endl;
    cout << p1.distance(2.34, 7.8) << endl;
    return 0;
}