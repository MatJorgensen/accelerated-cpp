#include <iostream>

using std::cout;    using std::endl;

int main()
{
    for (int i = 0; i < 3; i++) {

        // square
        for (int j = 0; j < 3; j++)
            cout << "* ";

        cout << "    ";

        // rectangle
        for (int j = 0; j < 6; j++)
            cout << "* ";

        cout << "    ";

        // triangle
        for (int j = 0; j < 3; j++) {
            if (j <= i)
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}