#include <iostream>
#include <cstring>
using namespace std;

int simObjCnt=0;
int cmxObjCnt=0;

class SoSimple
{
public:
    SoSimple()
    {
        simObjCnt++;
        cout<<simObjCnt<<"번째 SoSimple 객체"<<endl;
    }
};

class SoComplex
{
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"번째 SoComplex 객체임" << endl;
    }
    SoComplex(SoComplex& copy)
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<"번째 SoComplex 객체" << endl;
    }
    ~SoComplex()
    {
        cout << "사라지고 있어!" << endl;
    }
};

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex();
    SoComplex com2 = com1; //Same as SoComplex com2(com1);
    return 0;
}