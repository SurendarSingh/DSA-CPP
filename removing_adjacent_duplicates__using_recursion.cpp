#include<iostream>
using namespace std;

string duplicates(string str) {
    if(str.length()==1)
        return str;
    string remstr = duplicates(str.substr(1));
    if(str[0]==remstr[0])
        return remstr.substr(1);
    else
        return str[0]+remstr;
}

int main() {
    Solution ss;
    string str;
    cin>>str;
    cout<<removeDuplicates(ss.str)<<endl;
    return 0;
}

class Solution {
    public:
        string removeDuplicates(string s) {
            if(s.length()==1)
                return s;
            string remstr = duplicates(s.substr(1));
            if(s[0]==remstr[0])
                return remstr.substr(1);
            else
                return s[0]+remstr;
        }
};