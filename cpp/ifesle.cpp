#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    if (age > 150 || age < 1)
    {
        cout << "Invalid age";
    }
    else if (age >= 18)
    {
        cout << "you can vote ";
    }
    else
    {
        cout << "you cannot vote";
    }
    return 0;
}