#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell your age "<<endl;
    cin>>age;
    if(age<18){
        cout<<"ur not invited"<<endl;
    }
    else if(age==18){
        cout<<"u will get a kid pass"<<endl;
    }
    else{
        cout<<"ur invited"<<endl;
    }
    return 0;
}