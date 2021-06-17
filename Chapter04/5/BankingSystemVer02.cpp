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

class Account
{
private:
    int ID;
    char * name;
    int balance;
public:
    Account(int id, char * n, int b)
        :ID(id),balance(b)
    {
        int len = strlen(n) + 1;
        name = new char[len];
        strcpy(name,n);
    }
    Account()
    {
        ID = 0;
        name = NULL;
        balance = -1;
    }
    void SetAccount(int id, char * n, int b)
    {
        ID = id;
        name = n;
        balance = b;
    }
    ~Account()
    {
        delete [] name;
    }
};

