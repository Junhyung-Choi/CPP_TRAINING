#include <iostream>
using namespace std;

typedef struct Account{
    int ID;
    char name[100];
    int balance = -1;
} Account;

typedef struct Database{
    Account accountlist[500];
} Database;

Database database;
int accountnum = 0;

void makeAccount(void){
    Account customer;
    cout << "[계좌개설]" << endl;
    cout << "계좌ID: "; 
    cin >> customer.ID;
    cout << "이 름: ";
    cin >> customer.name;
    cout << "입금액: ";
    cin >> customer.balance;
    database.accountlist[accountnum++] = customer;
    cout << endl;
}

void deposit(void)
{
    int findID, value;
    cout << "[입  금]" << endl;
    cout << "계좌ID: "; 
    cin >> findID;
    cout << "입금액: ";
    cin >> value;
    for (int i = 0; i < accountnum; i++){
        if(database.accountlist[i].ID == findID){
            database.accountlist[i].balance += value;
        }
    }
    cout << "입금완료" << endl << endl;
}

void withdraw(void)
{
    int findID, value;
    cout << "[출  금]" << endl;
    cout << "계좌ID: "; 
    cin >> findID;
    cout << "출금액: ";
    cin >> value;
    for (int i = 0; i < accountnum; i++){
        if(database.accountlist[i].ID == findID){
            database.accountlist[i].balance -= value;
        }
    }
    cout << "출금완료" << endl << endl;
}

void showAllAccount(void)
{
    for (int i = 0; i < accountnum; i++){
        cout << "계좌ID: " << database.accountlist[i].ID << endl;
        cout << "이 름: " << database.accountlist[i].name << endl;
        cout << "잔 액: " << database.accountlist[i].balance << endl << endl;
    }
}

int main(void)
{
    bool isquit = false;
    int choice;
    while(true)
    {
        cout << "-----Menu-----" << endl;
        cout << "1. 계좌개설" << endl;
        cout << "2. 입 금 " << endl;
        cout << "3. 출 금" << endl;
        cout << "4. 계좌정보 전체 출력 " << endl;
        cout << "5. 프로그램 종료 " << endl;
        cout << "선택: ";
        cin >> choice;
        cout << endl;
        switch(choice)
        {
            case 1:
                makeAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                showAllAccount();
                break;
            case 5:
                isquit = true;
                break;
        }

        if(isquit)
        {
            break;
        }
    }
}