#include<iostream>
using namespace std;

int tilingWays(int n) {
    if(n==1) {
        return 1;
    }
    if(n==0) {
        return 0;
    }
    return tilingWays(n-1) + tilingWays(n-2);
}

int main() {
    cout<<tilingWays(4)<<endl; // 2*4
    return 0;
}