#include <iostream>

using std::cout;    using std::endl;
using std::cin;

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (x > y)
        cout << x << " is larger than " << y << endl;
    else if (y > x)
        cout << y << " is larger than " << x << endl;
    else 
        cout << "The numbers are equal" << endl;

    return 0;
}