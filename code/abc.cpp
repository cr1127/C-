#include<iostream>
#include<math.h>
using namespace std;
#define ABS_FLOAT_0 0.0001;
struct point_float
{
    float x;
    float y;

};

float GetTriangleSquar(const point_float pt0, const point_float pt1, const point_float pt2)
{
    point_float AB, BC;
    AB.x = pt1.x - pt0.x;
    AB.y = pt1.y - pt0.y;
    BC.x = pt2.x - pt1.x;
    BC.y = pt2.y - pt1.y;

    return fabs((AB.x*BC.y - AB.y*BC.x)) / 2.0f;
}
bool IsInTriangle(const point_float A, const point_float B, const point_float C, const point_float D)
{
    float SABC, SADB, SBDC, SADC;
    SABC = GetTriangleSquar(A, B, C);
    SADB = GetTriangleSquar(A, D, B);
    SBDC = GetTriangleSquar(B, D, C);
    SADC = GetTriangleSquar(A, D, C);
    float SumSuqar = SADB + SBDC + SADC;
    if ((-0.0001 < (SABC - SumSuqar)) && ((SABC - SumSuqar) < 0.0001))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    point_float pt0;
    pt0.x = 0;
    pt0.y = 0;
    point_float pt1;
    pt1.x = 0;
    pt1.y = 4;
    point_float pt2;
    pt2.x = 4;
    pt2.y = 0;
    point_float pt3;
    pt3.x = 2;
    pt3.y = 1;
    int a, b;
    a=GetTriangleSquar(pt0, pt1, pt2);
    b=IsInTriangle(pt0, pt1, pt2, pt3);
    cout << a << "  " << b << endl;
    system("pause");
    return 0;
}