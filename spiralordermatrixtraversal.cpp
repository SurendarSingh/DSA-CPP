#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }
    
    int cols=0, cole=m-1, rows=0, rowe=n-1;
    while(cols<=cole && rows<=rowe) {
        //First row
        for(int i=cols; i<=cole; i++)
            cout<<arr[rows][i]<<" ";
        rows++;

        //Last col
        for(int i=rows; i<=rowe; i++)
            cout<<arr[i][cole]<<" ";
        cole--;

        //Last row
        for(int i=cole; i>=cols; i--)
            cout<<arr[rowe][i]<<" ";
        rowe--;

        //First col
        for(int i=rowe; i>=rows; i--)
            cout<<arr[i][cols]<<" ";
        cols++;
        
    }
    cout<<endl;

    return 0;
}