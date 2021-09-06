#include<iostream>

using namespace std;

// Inclusion-Exclusion Principle
int divisible(int n, int a, int b) {
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3;
}

// Euclid Algorithm to find GCD/HFC
int GCD(int a, int b) {
    while(b!=0) {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main() {

    // cout<<divisible(40,5,7)<<endl;

    // cout<<GCD(42,24)<<endl;

    return 0;
}