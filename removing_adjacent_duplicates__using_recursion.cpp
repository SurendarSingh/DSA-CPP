#include<iostream>
using namespace std;

string duplicates(string str) {
    if(str.length()==1)
        return str;
    string remstr = duplicates(str.substr(1));
    if(str[0]==remstr[0])
        return remstr;
    else
        return str[0]+remstr;
}

int main() {
    string str;
    cin>>str;
    cout<<duplicates(str)<<endl;
    return 0;
}