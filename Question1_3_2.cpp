#include <iostream>

int SimpleFunc(int a = 10)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}

// Compileation is performed because the condition of function overloading is statisfied.
// However if a fucntion is called without passing an argument as follows,
// a compile error occurs whenever both functions satisfy the calling condition.
// SimpleFunc();
