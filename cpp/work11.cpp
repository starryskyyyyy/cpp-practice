//输入mnp的值求s
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,p;
    long long up=0,down=0;
    cin>>m>>n;
    int m1=1,n1=1;
    while(m1<=m&&n1<=n)
    {
        up+=m1+n1*n1*n1;
        m1++;
        n1++;
    }
    cin>>p;
    int p1=1;
    while(p1<=p)
    {
        down+=p1*p1*p1*p1*p1;
        p1++;
    }
    double s=static_cast<double>(up)/down;
    cout<<s;
    return 0;
}