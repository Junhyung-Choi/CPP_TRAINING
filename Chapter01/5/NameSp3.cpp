#include <iostream>

namespace BestComImp1
{
    void SimpleFunc(void);
}

namespace BestComImp1
{
    void PrettyFunc(void);
}

namespace ProgComImp1
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImp1::SimpleFunc();
    return 0;
}

void BestComImp1::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
    PrettyFunc(); // Equal namespace
    ProgComImp1::SimpleFunc(); // Different namespace
}

void BestComImp1::PrettyFunc(void)
{
    std::cout << "So Pretty!" << std::endl;
}

void ProgComImp1::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}


// Nesting of namespaces

// namespace Parent
// {
//     int num = 2;
//     namespace SubOne
//     {
//         int num = 3;
//     }
//     namespace SubTwo
//     {
//         int num = 4;
//     }
// }

// std::cout << Parent::num << std::endl; <- 2
// std::cout << Parent::SubOne::num << std::endl; <- 3
// std::cout << Parent::SubTwo::num << std::endl; <- 4