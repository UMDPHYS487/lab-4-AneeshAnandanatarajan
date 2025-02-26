// your code here
#include <iostream>

using namespace std;

int y;
int *x;


int main()
{
    y = 15;
    x = &y;
    cout << "Value y: " << y << "\n";
    cout << "Address y: " << &y << "\n";
    cout  << "Value x: " << *x << "\n";
    cout << "Address x: " << &x << "\n";
    y = 20;
    x = &y;
    cout << "Value y: " << y << "\n";
    cout << "Address y: " << &y << "\n";
    cout  << "Value x: " << *x << "\n";
    cout << "Address x: " << &x << "\n";
}