#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
    Point(double _x, double _y)
    {
        x = _x;
        y = _y;
    }
};
void print(Point a)
{
    cout << a.x << " " << a.y;
}
int main()
{
    Point a(3.4, 5.6);
    print(a);
    return 0;
}
