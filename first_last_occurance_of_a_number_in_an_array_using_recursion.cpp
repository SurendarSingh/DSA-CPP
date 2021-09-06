#include<iostream>

using namespace std;

int firstoccurance(int arr[], int n, int i, int key) {
    if(i==n) {
        return -1;
    }
    if(arr[i]==key) {
        return i;
    }
    return firstoccurance(arr, n, i+1, key);
} 

int lastoccurance(int arr[], int n, int j, int key) {
    if(arr[j]==key) {
        return j;
    }
    if(j==0) {
        return -1;
    }
    return lastoccurance(arr, n, j-1, key);
}

int main() {
    int arr[]={1,2,3,4,2,2};

    cout<<firstoccurance(arr, 6, 0, 2)<<endl;
    cout<<lastoccurance(arr, 6, 6, 2)<<endl;

    return 0;
}