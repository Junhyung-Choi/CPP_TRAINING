#include <iostream>

int main(void)
{
    int tmp,result = 0;
    for(int i=1; i < 6; i++)
    {
        std::cout << i << "번째 정수 입력: ";
        std::cin >> tmp;
        result += tmp;
    }
    std::cout << "합계: " << result << std::endl;
    return 0;
}