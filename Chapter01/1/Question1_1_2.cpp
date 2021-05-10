#include <iostream>

int main(void)
{
    char name[100],number[100];
    
    std::cout << "당신의 이름은 무엇인가요?: ";
    std::cin >> name;

    std::cout << "당신의 전화번호는 무엇인가요?: ";
    std::cin >> number;

    std::cout << "당신의 이름은 " << name << "입니다." << std::endl;
    std::cout << "당신의 전화번호는 " << number << "입니다." << std::endl;
}