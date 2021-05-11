#include <iostream>
using namespace std;

void addOne(int &num)
{
    num += 1;
}

void changeSign(int &num)
{
    num = num * -1;
}

int main(void)
{
    int num = 5;
    int &refnum = num;
    addOne(num);
    cout << "num: " << num << endl;
    changeSign(num);
    cout << "num: " << num << endl;
    return 0;
}