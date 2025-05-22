#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    switch(age){
        case 12:
        cout<<"your are 12";
        break;

        case 18:
        cout<<"you are 18";
        break;

        default:
        cout<<"you are not 12 nor 18";
        
    }
    return 0;
}