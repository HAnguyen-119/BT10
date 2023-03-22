#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
};
Point mid_point(const Point a, const Point b)
{
    Point midPoint;
    midPoint.x = (a.x + b.x)/2;
    midPoint.y = (a.y + b.y)/2;
    return midPoint;
}
int main()
{
    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    cout << mid_point(a, b).x << " " << mid_point(a, b).y << endl;
    return 0;
}

