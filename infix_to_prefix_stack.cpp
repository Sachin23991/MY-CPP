#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
int precedence (char a){
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
string infix_to_prefix(string infix){
    reverse(infix.begin(),infix.end());
    for(int i =0;i<infix.size(),i++){
        if(infix[i]=='('){
            infix[i] = ')';
        }
        else if(infix[i]==')'){
            infix[i] = '(';
        }
    }
    stack<string>st;
    string prefix = "";
    for(int i = 0;i<infix.size(),i++){
        char ch = infix[i];
        if(isalnum(ch)){
            prefix+=ch;
        }
        else if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){
            while(!st.empty() && st.top!='('){
                prefix+= st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty()&&precedence(st.top())>=precedence(ch)){
                prefix += st.top();
                st.pop();
            }
            st.push(ch);
        }

        while(!st.empty()){
            prefix += st.top();
            st.pop();
        }
        reverse(prefix.begin(),prefix.end());
        return prefix;
    }
}
int main(){
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    cout << "Infix Expression: " << infix << endl;
    string prefix = infixToPrefix(infix);
    cout << "Prefix Expression: " << prefix << endl;
    return 0;

}
