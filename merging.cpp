#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1;
    cin >> n1;
    vector<int> v1(n1);

    for (int i = 0; i < n1; i++) {
        cin >> v1[i];
    }

    int n2;
    cin >> n2;
    vector<int> v2(n2);

    for (int i = 0; i < n2; i++) {
        cin >> v2[i];
    }

    vector<int> v3;

    
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (v2[i] == v1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            v3.insert(v3.begin(), v2[i]);
        }
    }
    
    for (int i = 0; i < n1; i++) {
        v3.push_back(v1[i]);
    }
   
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (v2[i] == v1[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            v3.push_back(v2[i]);
        }
    }

    

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }

    return 0;
}
