#include<iostream>
using namespace std;

// int main(){
//     int arr[3]={1,3,6};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     return 0;
// }

int main(){
    int n;
    
    cout<<"enter n "<<endl;
    cin>>n;
    int marks[n];
    for (int i=0;i<n;i++){
        cout<<"enter the marks of "<<i<<"th student"<<endl;
        cin>>marks[i];
    }
    for (int i=0;i<n;i++){
        cout<<"marks of"<<i<<"th student is "<<marks[i]<<endl;
    }
    return 0;
}