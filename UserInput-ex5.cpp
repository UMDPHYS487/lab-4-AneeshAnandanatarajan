// Add your code here
#include <iostream>
using namespace std;

int factorial (int n)
{
    int i = 1;
    int fact = n;
    while ((n - i) > 0)
    {
        fact = fact * (n-i);
        ++i;
    }
    return fact;
}


int main()
{
    int i;
    cout << "Please enter a number:\n";
    cin >> i;
    cout << "The factorial of your number is " << factorial(i) << "\n";
    return 0;
}