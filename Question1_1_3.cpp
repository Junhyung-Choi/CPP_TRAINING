#include <iostream>

int main(void)
{
    int num;
    std::cout << "구구단 중 몇 단을 보시겠습니까?: ";
    std::cin >> num;

    for(int i=1; i<10; i++)
    {
        std::cout << num << "*" << i << " = " << num * i << std::endl;
    }
}