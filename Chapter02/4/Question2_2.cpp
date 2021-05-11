#include <iostream>
using namespace std;

int main(void)
{
    const int num = 12;
    int b = 14;
    const int* ptr = &num;
    const int*(&ref) = ptr;

    cout << num << endl;
    cout << *ptr << endl;
    cout << *ref << endl;

    ptr = &b;

    cout << num << endl;
    cout << *ptr << endl;
    cout << *ref << endl;
    
    return 0;
}