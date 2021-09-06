#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int a=2, b=4;
    swap(&a, &b); // Sending by reference i.e., address
    cout<<a<<" "<<b<<endl;

    return 0;
}