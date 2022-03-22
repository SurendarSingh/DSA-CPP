#include<iostream>
#include<stack>
using namespace std;

void addoperation(stack<int> st, char ch) {
    int op1 = st.top();
    st.pop();
    int op2 = st.top();
    st.pop();
    if(ch == '+') {
        st.push(op1 + op2);
    }
    if(ch == '-') {
        st.push(op1 - op2);
    }
    if(ch == '*') {
        st.push(op1 * op2);
    }
    if(ch == '/') {
        st.push(op1 / op2);
    }
}

int prefixEvaluation(string str) {
    stack<int> st;
    for(int i = str.length()-1; i>=0; i--) {
        if(isdigit(str[i])) {
            st.push(str[i]-'0');
        }
        else {
            addoperation(st, str[i]);
        }
    }
    return st.top();
}

int main() {
    string str = "+11";
    cout<<prefixEvaluation(str)<<endl;
    return 0;
}