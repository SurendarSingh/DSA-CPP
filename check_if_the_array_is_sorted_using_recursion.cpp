#include<iostream>

using namespace std;

bool checksort(int arr[], int n) {

    if(n==1)
        return true;

    return (arr[0]<arr[1] && checksort(arr+1, n-1));
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8};
    cout<<checksort(arr, 8)<<endl;
    return 0;
}