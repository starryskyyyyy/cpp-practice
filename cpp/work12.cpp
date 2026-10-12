//三个数最大值最小值
#include<iostream>
using namespace std;
void mymax(double a,double b,double c,double &max)
{
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
}
void mymin(double a,double b,double c,double &min)
{
    min=a;
    if(b<min) min=b;
    if(c<min) min=c;
}
int main()
{
    int a,b,c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    double max_val, min_val;
    mymax(a,b,c,max_val);
    mymin(a,b,c,min_val);
    cout<<"Max: "<<max_val<<endl;
    cout<<"Min: "<<min_val<<endl;
    return 0;
}