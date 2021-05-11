#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main(void)
{
    int val1= 10;
    int val2 = 20;

    //Error: SwapByRef2(12, 23);
    //Reference cannot refer to const values, only can variables.
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << endl;
    return 0;
}