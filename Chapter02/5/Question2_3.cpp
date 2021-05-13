#include <iostream>
using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point * result = new Point;
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;
    return *result;
}

int main(void)
{
    Point* p1 = new Point;
    p1->xpos = 1;
    p1->ypos = 2;
    Point* p2 = new Point;
    p2->xpos = 3;
    p2->ypos = 4;
    Point& result = PntAdder(*p1,*p2);
    delete p1,p2;
    cout << "xpos: " << result.xpos << ", ypos: " << result.ypos << endl;
}