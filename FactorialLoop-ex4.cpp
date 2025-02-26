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
    int n = 1;
    while (n < 10)
    {
        cout << factorial(n) << "\n";
        ++n;
    }
}