#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s1, string s2) {
    int a[256] = {}; // Initialize arrays with zeros
    int b[256] = {};
    int n = s1.size();
    int m = s2.size();

    if (n != m) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        if (a[s1[i]] != b[s2[i]]) {
            return false;
        }
        a[s1[i]] = b[s2[i]] = i;
    }

    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (isIsomorphic(s1, s2)) {
        cout << "They are isomorphic" << endl;
    } else {
        cout << "They are not isomorphic" << endl;
    }

    return 0;
}
/*in this code we are taking boolean function and after that we are passing two string through it
first we are assigning two array to = 0 then we are taking frequency of each number at their index
and then we are checking both array size if they are equal we will proceed further and after 
that we are taking a unique no at which two character of strings are mapped means at both 
array having character no at its index we are changing with unique number if we are
succesfull in all that then both two arrays are isomorphic*/