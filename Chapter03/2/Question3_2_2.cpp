#include <iostream>
#include <cstring>
#define MAX_LEN 100
using namespace std;

class Printer{
private:
    char storage[MAX_LEN];
public:
    void Init();
    void SetString(const char * string);
    void ShowString();
};

void Printer::Init()
{
    strcpy(storage,"");
    return;
}

void Printer::SetString(const char * string)
{
    strcpy(storage,string);
    return;
}

void Printer::ShowString()
{
    cout << storage << endl;
}

int main(void)
{
    Printer pnt;
    pnt.SetString("Hello World!");
    pnt.ShowString();
    
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}