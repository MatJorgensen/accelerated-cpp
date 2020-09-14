#include <iostream>

using std::cout;    using std::endl;

int main()
{
    int product = 1;

    for (int i = 2; i < 10; i++)    // can also be initialized to 1
        product *= i;

    cout << "Product of numbers in range [1, 10) is " << product << endl;

    return 0;
}