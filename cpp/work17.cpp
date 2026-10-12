#include <iostream>
using namespace std;
int password(const int & key){
    if(key==1234) return 1;
    else{
        cout<< "Wrong password, try again: ";
        int k;
        cin>>k;
        return password(k);
    }
}
int main(){
    static int n=0;
    int k;
    cin>>k;
    password(k);
    n++;
    if(n<3)
        if(k==1234) return 1;
        else password(k);
    else
        cout<< "You have entered the wrong password 3 times, please try again later."<<endl;
    return 0;
    
}