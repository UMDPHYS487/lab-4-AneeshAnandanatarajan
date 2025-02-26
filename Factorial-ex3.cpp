// Add your code here
#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int fact = 1;
    while (n < 11) 
    {
        fact = fact * n;
        cout << fact << "\n";
        ++n;
    }
    cout << "Done";
}