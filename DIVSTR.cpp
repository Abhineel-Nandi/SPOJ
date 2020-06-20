#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int T;
string text, p;

int main() {
    cin >> T;
    getchar();
    while (T --) {
        getline(cin, text);
        getline(cin, p);
        int occurrences = 0, pointer = 0;
        for (char ch: text) {
            if (ch == p[pointer]) {
                pointer ++;
                if (pointer == (int)p.size()) {
                    occurrences ++;
                    pointer = 0;
                }
            }
        }
        cout << (int)text.size() - (int)p.size() * occurrences << endl;
    }
    
    return 0;
}

