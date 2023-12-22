#include <iostream>
using namespace std;
class Employee {
private:
    int id;
    string firstName;
    string lastName;
    int salary;
public:
    Employee(int id, string firstName, string lastName, int salary) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    int getId() {
        return id;
    }
    void setId(int id) {
        this->id = id;
    }
    string getFirstName() {
        return firstName;
    }
    void setFirstName(string firstName) {
        this->firstName = firstName;
    }
    string getLastName() {
        return lastName;
    }
    void setLastName(string lastName) {
        this->lastName = lastName;
    }
    string getFullName() {
        return firstName + " " + lastName;
    }
    int getSalary() {
        return salary;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
};
int main() {
    // Tạo một đối tượng Employee
    Employee emp(1, "John", "Doe", 50000);

    // Sử dụng các phương thức getter để lấy thông tin
    cout << "ID: " << emp.getId() << endl;
    cout << "First Name: " << emp.getFirstName() << endl;
    cout << "Last Name: " << emp.getLastName() << endl;
    cout << "Full Name: " << emp.getFullName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    // Sử dụng phương thức setter để cập nhật thông tin
    emp.setSalary(55000);
    cout << "Updated Salary: " << emp.getSalary() << endl;

    return 0;
}