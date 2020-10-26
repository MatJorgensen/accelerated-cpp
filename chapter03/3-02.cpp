#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::sort;
using std::cout;            using std::streamsize;
using std::endl;            using std::string;
using std::setprecision;    using std::vector;

int main()
{
    vector<double> numbers;

    cout << "Please enter a sequence of numbers, "
            "followed by end-of-file: ";
    double x;

    while (cin >> x)
        numbers.push_back(x);

    typedef vector<double>::size_type vec_sz;
    vec_sz size = numbers.size();
    if (size == 0) {
        cout << endl << "You must enter a sequence of numbers. "
                        "Please try again." << endl;
        return 1;
    }

    sort(numbers.begin(), numbers.end());
    
    vec_sz lower = size/4, mid = size/2, upper = size * 3/4;
    double q1, median, q3;
    // 1st quartile
    q1 = mid % 2 == 0 ? (numbers[lower] + numbers[lower-1]) / 2
              : numbers[lower];
    // 2nd quartile (median)
    median = size % 2 == 0 ? (numbers[mid] + numbers[mid-1]) / 2
                  : numbers[mid];
    // 3rd quartile
    q3 = mid % 2 == 0 ? (numbers[upper] + numbers[upper-1]) / 2
              : numbers[upper];

    streamsize prec = cout.precision();
    cout << "1st quartile: " << setprecision(3) << q1 << endl
         << "2nd quartile: " << median << endl
         << "3rd quartile: " << q3 << setprecision(prec) << endl;

    return 0;
}