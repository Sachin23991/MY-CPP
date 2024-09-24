#include <iostream>
#include <string>
using namespace std;
class FriendB; // Forward declaration

class FriendA {
private:
    string name;

public:
    void set_name(const std::string& n) {
        name = n;
    }

    friend void compare_names(const FriendA& a, const FriendB& b);
};

class FriendB {
private:
    string name;

public:
    void set_name(const std::string& n) {
        name = n;
    }

    friend void compare_names(const FriendA& a, const FriendB& b);
};

void compare_names(const FriendA& a, const FriendB& b) {
    if (a.name.length() > b.name.length()) {
        cout << a.name << " has a longer name." << std::endl;
    } else if (a.name.length() < b.name.length()) {
        cout << b.name << " has a longer name." << std::endl;
    } else {
        cout << "Both friends have equally long names." << std::endl;
    }
}

int main() {
    FriendA friendA;
    FriendB friendB;

    friendA.set_name("Alice");
    friendB.set_name("Bob");

    compare_names(friendA, friendB);

    return 0;
}
