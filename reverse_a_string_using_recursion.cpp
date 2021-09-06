#include<iostream>
using namespace std;

// string reverse(string str, int s, int e) {
//     if(s>=e)
//         return str;
//     char temp=str[s];
//     str[s]=str[e];
//     str[e]=temp;
//     return reverse(str, s+1, e-1);
// }

void reverse(string str) {
    if(str.length()==0)
        return;
    reverse(str.substr(1));  // It will send the string of those character after index 1... Like binod ka inod
    cout<<str[0];
}

int main() {
    string str;
    cin>>str;

    // cout<<reverse(str, 0, (str.length()-1))<<endl;

    reverse(str);
    cout<<endl;
    return 0;
}