#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char a){
    if(a == '+' || a == '-'){
        return 1;
    }
    else if(a == '*' || a == '/'){
        return 2;
    }
    else if(a == '^'){
        return 3;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string infix){
    stack<char>st;
    string postfix="";
    for(int i =0;i<infix.size();i++){
        char ch = infix[i];
        //Now we are going to check wether our character is alphabetandnumerical or operator
        if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch == '('){
            st.push(ch);
        }
        else if(ch ==')'){
            while(!st.empty() && st.top()!='('){
                postfix += st.top();
                st.pop();
            }
            st.pop();// remove karega '(' from stack

        }
        else{
            while(!st.empty() && precedence(st.top())>=precedence(ch)){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    // Pop all the operators from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    
    return postfix;
}
int main(){
    string s;
    cin>>s;
    cout<<"Infix String: "<<s<<endl;
    cout<<"Postfix String: "<<infixtopostfix(s);
}
