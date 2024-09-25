#include<iostream>
#include<stack>
using namespace std;
stack<int>copystack(stack<int> &input){
    stack<int>temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
        
    }
    stack<int> result;
    while(!temp.empty()){
        int c = temp.top();
        temp.pop();
        result.push(c);
    }
    return result;
}
// with the help of recurssion
void f(stack<int>&st,stack<int>&result){
    if(st.empty()){
        return;
    }
    int curr = st.top();
    st.pop();
    f(st,result);
    result.push(curr);
    
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int>res;
    f(st, res);
    while(!res.empty()){
        int val = res.top();
        res.pop();
        cout<<val<<endl;
    }

    return 0;
}
