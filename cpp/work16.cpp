#include<iostream>
using namespace std;
inline double circlePerimeter(double r){
    return 2 * 3.1415926 * r;
}
int main()
{
    int r;
    cin>>r;
    cout<<circlePerimeter(r)<<endl;
}