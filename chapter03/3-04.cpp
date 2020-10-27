#include <iostream>
#include <string>
#include <vector>

using std::cin;     using std::vector;
using std::cout;    using std::string;
using std::endl;

int main()
{
    typedef vector<string>::size_type vec_sz;
    
    cout << "Please enter a sequence of words, "
            "followed by end-of-file: ";
    
    // initialize variables longest and shortest
    string s, shortest, longest;
    cin >> s;
    longest = shortest = s;

    // compute length for rest of strings
    while (cin >> s) {
        if (s.length() > longest.length())
            longest = s;
        
        if (s.length() < shortest.length())
            shortest = s;
    }

    cout << "Longest word has " << longest.length() << " characters." << endl;
    cout << "Shortest word has " << shortest.length() << " characters." << endl;

    return 0;
}