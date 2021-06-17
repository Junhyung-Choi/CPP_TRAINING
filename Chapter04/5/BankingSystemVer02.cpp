/*
 * Banking System Ver 0.2
 * writer: Junhyung-Choi
 * last fix: 2021-06-17
 * about: Account Class definition, Using object pointer array
 */

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void CreateAccount();
void DepositMoney();
void WithdrawMoney();
void ShowAllAccount();
void Exit();
void ShowMenu();

namespace LOOP
{
    enum {CREATE=1,DEPOSIT,WITHDRAW,SHOWALL,EXIT};
}

class Account
{
private:
    int ID;
    char * name;
    int balance;
public:
    Account(int id, char * n, int bal)
        :ID(id),balance(bal)
    {
        int len = strlen(n) + 1;
        name = new char[len];
        strcpy(name,n);
    }

    int GetID(){ return ID; }
    
    void Deposit(int money)
    {
        balance +=  money;
    }
    
    void Withdraw(int money)
    {
        balance -= money;
    }

    void ShowAccountInfo()
    {
        cout << "계좌ID: " << ID << ", ";
        cout << "이 름: " << name << ", ";
        cout << "잔 고: " << balance << endl << endl;
    }
    
    ~Account()
    {
        delete [] name;
    }
};

Account * accArr[100];
int accnumber = 0;

int main(void)
{
    bool isquit = false;
    int choice;
    while (true)
    {
        ShowMenu();
        cin >> choice;
        switch (choice)
        {
        case LOOP::CREATE:
            CreateAccount();
            break;
        case LOOP::DEPOSIT:
            DepositMoney();
            break;
        case LOOP::WITHDRAW:
            WithdrawMoney();
            break;
        case LOOP::SHOWALL:
            ShowAllAccount();
            break;
        case LOOP::EXIT:
            Exit();
            isquit = true;
            break;
        default:
            break;
        }
        if(isquit)
            break;
    }
}

void ShowMenu()
{
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금 " << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력 " << endl;
    cout << "5. 프로그램 종료 " << endl;
    cout << "선택: ";
}

void CreateAccount()
{
    int id;
    int bal;
    char namestr[100];
    cout << "[계좌개설]" << endl;
    cout << "계좌ID: "; 
    cin >> id;
    cout << "이 름: ";
    cin >> namestr;
    cout << "입금액: ";
    cin >> bal;
    accArr[accnumber++] = new Account(id,namestr,bal);
}

void DepositMoney()
{
    int findID, value;
    cout << "[입  금]" << endl;
    cout << "계좌ID: "; 
    cin >> findID;
    cout << "입금액: ";
    cin >> value;
    for (int i = 0; i < accnumber; i++){
        if(accArr[i]->GetID() == findID){
            accArr[i]->Deposit(value);
        }
    }
    cout << "입금완료" << endl << endl;
}

void WithdrawMoney()
{
    int findID, value;
    cout << "[출  금]" << endl;
    cout << "계좌ID: "; 
    cin >> findID;
    cout << "출금액: ";
    cin >> value;
    for (int i = 0; i < accnumber; i++){
        if(accArr[i]->GetID() == findID){
            accArr[i]->Withdraw(value);
        }
    }
    cout << "출금완료" << endl << endl;
}

void ShowAllAccount()
{
    for (int i = 0; i < accnumber; i++){
        accArr[i]->ShowAccountInfo();
    }
}

void Exit()
{
    for (int i = 0; i < accnumber; i++){
        delete accArr[i];
    }
}