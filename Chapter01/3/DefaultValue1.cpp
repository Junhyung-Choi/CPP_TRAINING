#include <iostream>

int Adder(int num1=1, int num2=2)
{
    return num1 + num2;
}

int main(void)
{
    std::cout << Adder() << std::endl;
    // if 5 gets into num1, result will be 7, if not, 6
    // Answer: 7 
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3,5) << std::endl;
    return 0;
}