#include <iostream>
using namespace std;

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    { }
    SoSimple& AddNum(int n)
    {
        num+=n;
        return *this;
    }
    void ShowData() const
    {
        cout << "num: " << num << endl;
    }
};

int main(int argc, char const *argv[])
{
    const SoSimple obj(7);
    //obj.AddNum(20); //AddNum is not const function, so not callable
    obj.ShowData();
    return 0;
}
