// thong tin ve tai khoan ngan hang
#include <iostream>
using namespace std;
class Account {
private:
    int id;
    string name;
    int balance = 0;
public:
    Account(int id, string name) {
        this->id = id;
        this->name = name;
    }
    Account(int id, string name, int balance) {
        // balance la so du trong tai khoan
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    int getId() {
        return id;
    }
    void setId() {
        this->id = id;
    }
    string getName() {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
    int getBalance() {
        return balance;
    }
    void setBalance(int balance) {
        this->balance = balance;
    }
    void deposit(int amount) {
        //phuong thuc dung de gui tien vao tai khoan
         balance += amount;
    }
    void withdraw(int amount) {
        //phuong thuc rut tien ra khoi tai khoan
        if (balance >= amount) {
            balance -= amount;
        }
        else { // so du ma nho hon so tien co trong tk thi chuong trinh dung lai
            cout << "That amount exceeds your current balance." << endl;
        }
    }
    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    Account account1(1000, "Tuan", 2000);
    account1.display();
    account1.withdraw(2100);
    account1.deposit(600);
    cout << "Balance: " << account1.getBalance() << endl;
    account1.withdraw(2100);
    cout << "Balance: " << account1.getBalance() << endl;
    return 0;
}