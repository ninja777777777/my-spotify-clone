#include <iostream>
using namespace std;
int index, num = 0;
// int main()
// {
//     cout<<"enter number "<<endl;
//     cin>>num;

//     while (index <= num)

//     {
//         cout << "we are at index " << index << endl;
//         index = index + 1;
//     }
//     return 0;
// }

//..........do while loop......

int main()
{
    cout << "enter num" << endl;
    cin >> num;
    do
    {
        cout << "we are at " << index << endl;
        index = index + 1;
    } while (index < num);
    
        
    
    return 0;
}