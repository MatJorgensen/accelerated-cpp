#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;             using std::sort;
using std::cout;            using std::streamsize;
using std::endl;            using std::string;
using std::setprecision;    using std::vector;
using std::setw;            using std::left;

int main()
{
    typedef vector<double>::size_type vec_sz;
    vector<string> names;
    vector<double> grades;

    for (;;) {       
        // ask for and read the student's name
        cout << "Please enter your first name (or Q to quit): ";
        string name;
        cin >> name;
        if (name == "q" || name == "Q")
            break;
        names.push_back(name);

        // ask for and read the midterm and final grades
        cout << "Please enter your midterm and final grades: ";
        double midterm, final;
        cin >> midterm >> final;

        // ask for and read the homework grades
        cout << "Enter three homework grades: ";
        vector<double> homework;
        double x;
        // invariant: homework contains all three homework grades read
        for (int i = 0; i < 3; i++) {
            cin >> x;
            homework.push_back(x);
        }

        // check that the student entered correct amount of homework grades
        vec_sz size = homework.size();
        if (size == 0) {
            cout << endl << "You must enter your grades. "
                            "Please try again." << endl;
            return 1;
        }
        if (size > 3) {
            cout << endl << "You must only enter three grades. "
                            "Please try again." << endl;
            return 1;
        }

        // sort the grades
        sort(homework.begin(), homework.end());

        // compute the median homework grade
        vec_sz mid = size/2;
        double median;
        median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
                    : homework[mid];
    
        // compute and write final grade
        grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * median);
    }

    // output names and grades as a table
    cout << left << setw(15) << endl << "Name" << "Grade" << endl;
    streamsize prec = cout.precision();
    for (vec_sz size = 0; size < names.size() && size < grades.size(); size++)
        cout << setw(15) << names[size] << setprecision(3) 
             << grades[size] << setprecision(prec) << endl;

    return 0;
}