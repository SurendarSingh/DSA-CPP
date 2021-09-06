#include<iostream>
#include<climits>

using namespace std;

void unique(int arr[], int n) {
    int ans=0;
    for(int i=0; i<64; i++) {
        int sum=0;
        for(int j=0; j<n; j++) {
            if((arr[j] & (1<<i))!=0)
                sum++;
        }
        if(sum%3!=0)
            ans = ans | (1<<i);
    }
    cout<<ans<<endl;
}

int main() {
    int arr[]={1,1,1,2,2,2,3,3,3,4};
    int n=10;
    unique(arr, n);
    return 0;
}