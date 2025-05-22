#include<iostream>
using namespace std;
int add(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"enter first number:"<<endl;
    cin>>a;

    cout<<"enter second number:"<<endl;
    cin>>b;

    cout<<"the function returned"<<endl<<add(a,b);
    return 0;
} 