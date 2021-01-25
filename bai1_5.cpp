#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
using namespace std;

struct point{
    int x;
    int y;
    point(int _x,int _y)
    {
        this->x=_x;
        this->y=_y;
    }
    point(){}

};

istream& operator>>(istream& in,point& a)
{
    in>>a.x;
    in>>a.y;
    return in;
}

double range(point a,point b)
{
    int cgv_1=abs(a.x-b.x);
    int cgv_2=abs(a.y-b.y);
    return (double)sqrt(cgv_1*cgv_1+cgv_2*cgv_2);
}

int main()
{
    point a,b;
    cin>>a>>b;
    cout<<setprecision(2)<<fixed<<range(a,b);


    return 0;
}
