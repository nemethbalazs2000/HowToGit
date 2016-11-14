// fizz.cpp
// Prints positive integers from 1 to 100

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        if (i%3 == 0)
        {
            cout << "Fizz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}
