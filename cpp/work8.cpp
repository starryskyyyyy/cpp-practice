//递归实现汉诺塔
#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<a<<"->"<<c<<endl;
    }
    else
    {
        hanoi(n-1,a,c,b);
        cout<<a<<"->"<<c<<endl;
        hanoi(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    return 0;
}