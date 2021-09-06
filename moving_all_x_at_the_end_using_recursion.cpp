#include<iostream>
using namespace std;

string movingXatEnd(string str) {
    if(str.length()==1)
        return str;
    string rem = movingXatEnd(str.substr(1));
    if(str[0]=='x')
        return rem+str[0];
    else
        return str[0]+rem;
}

int main() {
    string str;
    cin>>str;
    cout<<movingXatEnd(str)<<endl;
    return 0;
}