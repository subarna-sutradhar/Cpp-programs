#include<iostream>

using namespace std;
int c =45;

int main(){
    // int a,b,c;

    // cout<<"Enter the value of a"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"global c is "<<::c;
    // //here :: is scope reolution operator
    // //used to print the global value

    // float d = 34.4F; //for float
    // long double e = 34.4L;

    // cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is"<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is"<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is"<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is"<<sizeof(34.4L)<<endl;

    //reference variable
    float x = 455;
    float & y = x;//y is reference to x
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}