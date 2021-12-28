#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a;
    cin>>a;
    float xiaoshupart;
    xiaoshupart=10*(a-int(a));
    int zhengshupart;
    zhengshupart=int(a);
    float c;
    c=(zhengshupart%10*100+zhengshupart/10%10*10+zhengshupart/100)/1000.0;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<xiaoshupart+c;
    return 0;
}