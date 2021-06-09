#include <iostream>
using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    void Init(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    void ShowPointInfo() const
    {
        cout << "[" << xpos << ", " << ypos << "]" << endl;
    }
};

class Circle
{
private:
    Point origin;
    int radius;
public:
    void Init(int x, int y, int r)
    {
        origin.Init(x,y);
        radius = r;
    }
    void ShowCircleInfo() const
    {
        cout << "radius: " << radius << endl;
        origin.ShowPointInfo();
    }
};

class Ring
{
private:
    Circle inner;
    Circle outer;
public:
    void Init(int ix, int iy, int ir, int ox, int oy, int orad)
    {
        inner.Init(ix,iy,ir);
        outer.Init(ox,oy,orad);
    }
    void ShowRingInfo() const
    {
        cout << "Inner Circle Info..." << endl;
        inner.ShowCircleInfo();
        cout << "Outer Circle Info..." << endl;
        outer.ShowCircleInfo();
    }
};

int main(void)
{
    Ring ring;
    ring.Init(1,1,3,2,2,9);
    ring.ShowRingInfo();
    return 0;
}