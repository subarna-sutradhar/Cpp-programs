#include<iostream>
using namespace std;

int main(){
    //pointers
    int a=3;
    int *b = &a;
    cout<<"The address of a is "<<b<<endl;
    cout<<(*b);
    return 0;
}