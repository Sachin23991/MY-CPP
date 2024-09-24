#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    int id;
    int salary;
    void set(){
        cin>>name;
        cin>>id;
        cin>>salary;
    }
    void print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary;

    }
};
int main(){
    employee s;
    s.set();
    s.print();
}