//组合数
#include<iostream>
using namespace std;
int Multi(int m,int n){
    if(n==0||n==m)
        return 1;
    else
        return Multi(m-1,n-1)+Multi(m-1,n);
}
int Fabricate(int m,int n){
    int a=Multi(m,m-n+1);
    int b=Multi(n,1);
    return a/b;
}
int main()
{
    int m,n;
    cin>>m>>n;
    if(m<0||n<0||m<n){
        cout<<"输入错误"<<endl;
        return 0;
    }else
        cout<<Fabricate(m,n)<<endl;
    return 0;
}