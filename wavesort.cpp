#include<iostream>
using namespace std;

void swap(int arr[], int x, int y) {
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}

void waveSort(int arr[], int n) {
    for(int i=1; i<n; i+=2) {
        if(arr[i]>arr[i-1]) {
            swap(arr, i, i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2) {
            swap(arr, i, i+1);
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    waveSort(arr, n);
    for(int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}