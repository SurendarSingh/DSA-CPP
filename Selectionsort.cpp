#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cout<<"Enter the element "<<i+1<<" :";
        cin>>arr[i];
    }
    for(int i=0;i<(n-1);i++) {
        for(int j=(i+1);j<n;j++) {
            if(arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}