#include <iostream>
using namespace std;

class SinivleCap
{
public:
    void Take() const {cout << "콧물이 싹~ 낫습니다." << endl;}
};

class SneezeCap
{
public:
    void Take() const {cout << "재채기가 멎습니다." << endl;}
};

class SnuffleCap
{
public:
    void Take() const {cout << "코가 뻥 뚫립니다." << endl;}
};

class ColdPatient
{
public:
    void TakeSinivelCap(const SinivleCap &cap) const {cap.Take();}
    void TakeSneezeCap(const SneezeCap &cap) const {cap.Take();}
    void TakeSnufflelCap(const SnuffleCap &cap) const {cap.Take();}
};

int main(void)
{
    SinivleCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinivelCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnufflelCap(ncap);
    return 0;
}