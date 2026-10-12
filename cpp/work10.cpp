//一种函数
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double sh(double t){
    return (exp(t)-exp(-t))/2;
}

int main(){
    double x,y;
    cin>>x;
    double up=sh(1+sh(x));
    double down=sh(2*x)+sh(3*x);
    y=up/down;
    cout<<fixed<<setprecision(3)<<y;
}