#include <iostream>
#include <iomanip>

using std::cout;    using std::endl;
using std::setw;

int main()
{
    for (int i = 10; i >= -5; i--)
        cout << setw(2) << i << endl;

    return 0;
}