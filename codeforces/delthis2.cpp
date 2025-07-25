#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        string s;
        cin >> s;

       
        if (s.find("FFT") == string::npos && s.find("NTT") == string::npos) {
            cout << s << endl;
            t--;
            continue;
        }

       sort(s.begin(),s.end(),greater<char>());

        cout << s << endl;
        t--;
    }
}
