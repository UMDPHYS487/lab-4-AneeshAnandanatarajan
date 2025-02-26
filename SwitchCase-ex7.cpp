// Add your code here
#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Please enter a number:\n";
    cin >> i;

    int var;
    if (i % 2 == 0 && i < 10)
        var = 1;
    else if (i % 2 == 1)
        var = 2;
    else   
        var = 3;

    switch (var) 
    {
    case 1: 
    cout << i * i << "\n";
        break;
    case 2: 
    cout << i/2 << "\n";
        break;
    default: 
        cout << "Hahaha" << "\n";
    }
}