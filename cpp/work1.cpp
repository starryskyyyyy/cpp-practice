#include <iostream>
using namespace std;
int main()
{    
    int a=10, b=20;
    int *p=&a, *q=&b;
    *p =*p * *q;
    int & ra = a; ra=a;
    int *& rt = q;
    *rt = 30;   
    cout<<"a="<<a<<"\n"<<"b="<<b<<"\n"<<"*p="<<*p<<"\n"<<"*q="<<*q<<"\n"<<"ra="<<ra<<"\n"<<"*rt="<<*rt<<endl;    
    return 0;
}