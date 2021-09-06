#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n && !(n & (n-1))) // n && because if the value of n is 0, it will return false
        cout<<"It is power of 2"<<endl;
    else
        cout<<"It is not a power of 2"<<endl;
    return 0;
}