#include<iostream>
#include<stack>
#include<string>
using namespace std;
int evaluatepostfix(string exp){
    stack<int>st;//we are making a stack named st
    //now we are going to traverse through whole string 
    for(int i = 0;i<exp.size();i++){
        if(isdigit(exp[i])){
            st.push(exp[i]-'0');//it is used to convert the string element to int 
    }else{
        int val1 = st.top();
        st.pop();
        int val2 = st.top();
        st.pop();
        switch(exp[i]){
            case '+':
            
            st.push(val1+val2);
            break;
            case '-':
            
            st.push(val1-val2);
            break;
            case '*':
           
            st.push(val1*val2);
            break;
            case '/':
            
            st.push(val1/val2);
            break;
        }
    }

    }
    return st.top();
}
int main(){
    string exp;
    cin>>exp;
    cout<<evaluatepostfix(exp);

}
