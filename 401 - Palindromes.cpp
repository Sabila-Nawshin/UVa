#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    string s;
    while(cin >> s){
        bool palindrome = true;
        int mirrored = 0;
        for(int i = 0, j = s.size() - 1; i < j; i++, j--) {
            if (s.at(i) != s.at(j))
                palindrome = false;
        }

        for (int i = 0, j = s.size() - 1; i < s.size(); i++, j--) {
            if((s.at(i) == 'A' && s.at(j) == 'A')||(s.at(i) == 'E' && s.at(j) == '3')||(s.at(i) == '3' && s.at(j) == 'E')||
               (s.at(i) == 'H' && s.at(j) == 'H')||(s.at(i) == 'I' && s.at(j) == 'I')||(s.at(i) == 'J' && s.at(j) == 'L')||
               (s.at(i) == 'L' && s.at(j) == 'J')||(s.at(i) == 'M' && s.at(j) == 'M')||(s.at(i) == 'O' && s.at(j) == 'O')||
               (s.at(i) == '2' && s.at(j) == 'S')||(s.at(i) == 'T' && s.at(j) == 'T')||(s.at(i) == 'U' && s.at(j) == 'U')||
               (s.at(i) == 'V' && s.at(j) == 'V')||(s.at(i) == 'W' && s.at(j) == 'W')||(s.at(i) == 'X' && s.at(j) == 'X')||
               (s.at(i) == 'Y' && s.at(j) == 'Y')||(s.at(i) == 'Z' && s.at(j) == '5')||(s.at(i) == '5' && s.at(j) == 'Z')||
               (s.at(i) == '1' && s.at(j) == '1')||(s.at(i) == 'S' && s.at(j) == '2')||(s.at(i) == '8' && s.at(j) == '8'))
                    mirrored ++;
        }

        if (!palindrome && mirrored != s.size())
            cout << s << " -- is not a palindrome.\n";
        if (palindrome && mirrored != s.size())
            cout << s << " -- is a regular palindrome.\n";
        if (!palindrome && mirrored == s.size())
            cout << s << " -- is a mirrored string.\n";
        if (palindrome && mirrored == s.size())
            cout << s << " -- is a mirrored palindrome.\n";

        cout << endl;

    }
    return 0;
}
