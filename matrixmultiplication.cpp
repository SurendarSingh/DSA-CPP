#include<iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int a1[n1][n2];
    int a2[n2][n3];
    cout<<"Enter 1st matrix:"<<endl;
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) 
            cin>>a1[i][j];
    }
    cout<<"Enter 2nd matrix:"<<endl;
    for(int i=0; i<n2; i++) {
        for(int j=0; j<n3; j++) 
            cin>>a2[i][j];
    }

    cout<<"Multiplication of these matrix:"<<endl;
    int a[n1][n3];
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n3; j++) {
            a[i][j]=0;
            for(int k=0; k<n2; k++) {
                a[i][j]+=a1[i][k]*a2[k][j];
            }
        }
    }
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n3; j++) 
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}