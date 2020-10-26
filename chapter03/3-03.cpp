#include <iostream>
#include <string>
#include <vector>

using std::cin;     using std::vector;
using std::cout;    using std::string;
using std::endl;

int main()
{
    typedef vector<string>::size_type vec_sz;
    vector<string> words;
    vector<int> counts;
   
    cout << "Please enter a sequence of words, "
            "followed by end-of-file: ";
    string s;

    while (cin >> s) {
        bool exists = false;

        for (vec_sz i = 0; i < words.size(); i++) {
            if (s == words[i]) {
                counts[i]++;
                exists = true;
            }
        }

        if (!exists) {
            words.push_back(s);
            counts.push_back(1);
        }
    }

    for (vec_sz i = 0; i < words.size(); i++)
        cout << words[i] << ":\t" << counts[i] << endl;

    return 0;
}