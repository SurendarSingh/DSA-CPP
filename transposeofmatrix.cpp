#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }

    
    for(int arrs=0; arrs<n; arrs++) {
        for(int i=arrs; i<n; i++) {
            int temp=arr[arrs][i];
            arr[arrs][i]=arr[i][arrs];
            arr[i][arrs]=temp;
        }
    }

    cout<<"Transpose Matrix:"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}