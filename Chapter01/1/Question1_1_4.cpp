#include <iostream>

int main(void)
{
    int sale = 0;
    while(true)
    {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sale;
        if(sale == -1)
        {
            break;
        }
        std::cout << "이번 달 급여: " << 50 + (sale * 0.12) << std::endl;
    } 
}