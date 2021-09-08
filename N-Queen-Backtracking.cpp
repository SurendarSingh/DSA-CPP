#include<iostream>
using namespace std;

bool isSafe(int** arr, int n, int x, int y) {
    for(int i = 0; i<x; i++) {
        if(arr[i][y]==1) {
            return false;
        }
    }
    for(int i=x-1, j=y-1; i>=0 && j>=0; i--, j--) {
        if(arr[i][j]==1) {
            return false;
        }
    }
    for(int i=x-1, j=y+1; i>=0 && j<n; i--, j++) {
        if(arr[i][j]==1) {
            return false;
        }
    }
    return true;
}

bool nQueen(int** arr, int n, int x) {
    if(x>=n) {
        return true;
    }

    for(int j = 0; j<n; j++) {
        if(isSafe(arr, n, x, j)) {
            arr[x][j] = 1;
            if(nQueen(arr, n, x+1)) {
                return true;
            }
            arr[x][j] = 0; // backtracking
        }
    }
    return false;
    
}

int main() {
    int n;
    cin>>n;
    int** arr=new int* [n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[i][j] = 0;
        }
    }

    if(nQueen(arr, n, 0)) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    else {
        cout<<"Program Error"<<endl;
    }
    return 0;
}