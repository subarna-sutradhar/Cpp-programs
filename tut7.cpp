#include<iostream>

using namespace std;
int c =45;

int main(){
    int a,b,c;

    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"global c is "<<::c;
    //here :: is scope reolution operator
    //used to print the global value
    return 0;
}