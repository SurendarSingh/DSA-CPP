#include<iostream>

using namespace std;

int factorial(int n) {

    if(n==0) { // Base condition
        return 1;
    }

    // int prevfact = factorial(n-1);
    // return n*prevfact;

    return n*factorial(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}