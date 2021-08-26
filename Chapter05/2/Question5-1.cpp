#include <iostream>
#include <cstring>
using namespace std;

namespace COM_POS
{
    enum {CLERK, SENIOR, ASSIST, MANAGER};

    void ShowPosInfo(int pos)
    {
        switch (pos)
        {
        case CLERK:
            cout << "사원" << endl;
            break;
        case SENIOR:
            cout << "주임" << endl;
            break;
        case ASSIST:
            cout << "대리" << endl;
            break;
        case MANAGER:
            cout << "과장" << endl;
            break;
        default:
            break;
        }    
    }
}

class NameCard
{
private:
    char *name;
    char *company;
    char *tel;
    int position;
public:
    NameCard(const char * n, const char * c, const char * t,int p)
        :position(p)
    {
        name = new char[strlen(n)+1];
        company = new char[strlen(c)+1];
        tel = new char[strlen(t)+1];
        strcpy(name,n);
        strcpy(company,c);
        strcpy(tel,t);
    }

    NameCard(const NameCard& copy)
        :position(copy.position)
    {
        name = new char[strlen(copy.name)+1];
        company = new char[strlen(copy.company)+1];
        tel = new char[strlen(copy.tel)+1];
        strcpy(name,copy.name);
        strcpy(company,copy.company);
        strcpy(tel,copy.tel);
    }

    void ShowNameCardInfo()
    {
        cout << "이름: " << name << endl;
        cout << "회사: " << company << endl;
        cout << "전화번호: " << tel << endl;
        cout << "직급: ";
        COM_POS::ShowPosInfo(position);
        cout << endl;
    }

    ~NameCard()
    {
        cout << "delete function called!" << endl;
        delete [] name;
        delete [] company;
        delete [] tel;
    }
};

int main(void)
{
    NameCard manClerk("Lee","ABCEng","010-1111-2222",COM_POS::CLERK);
    NameCard copy1 = manClerk;
    NameCard manSENIOR("Hong","OrangeEng","010-333-4444",COM_POS::SENIOR);
    NameCard copy2 = manSENIOR;
    copy1.ShowNameCardInfo();
    copy2.ShowNameCardInfo();
}