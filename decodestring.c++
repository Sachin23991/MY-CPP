#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decodestring(string s) {
    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ']') {
            result.push_back(s[i]);
        } else {
            string str = "";
            while (!result.empty() && result.back() != '[') {
                str.push_back(result.back());
                result.pop_back();
            }
            reverse(str.begin(), str.end());
            result.pop_back(); // Remove the '[' character

            string num = "";
            while (!result.empty() && isdigit(result.back())) {
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            int n = stoi(num);

            for (int j = 0; j < n; j++) {
                result.append(str);
            }
        }
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    cout << decodestring(str) << endl;
    return 0;
}
