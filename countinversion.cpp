#include<iostream>
using namespace std;

long long merge(int arr[], int s, int mid, int e) {
    long long invcount = 0;
    int n1 = mid-s+1;
    int n2 = e-mid;
    int a[n1], b[n2];
    for(int i=0; i<n1; i++)
        a[i] = arr[s+i];
    for(int i=0; i<n2; i++)
        b[i] = arr[mid+1+i];

    int i=0, j=0, k=s;
    while(i<n1 && j<n2) {
        if(a[i]<=b[j]) {
            arr[k] = a[i];
            i++, k++;
        }
        else {
            arr[k] = b[j];
            j++, k++;
            invcount += n1-i;
        }
    }
    while(i<n1) {
        arr[k] = a[i];
        i++, k++;
    }
    while(j<n2) {
        arr[k] = b[j];
        j++, k++;
    }
    return invcount;
}

long long mergeSort(int arr[], int s, int e) {
    long long invcount = 0;
    if(s<e) {
        int mid = (s+e)/2;
        invcount += mergeSort(arr, s, mid);
        invcount += mergeSort(arr, mid+1, e);

        invcount += merge(arr, s, mid, e);
    }
    return invcount;
}

int main() {
    int arr[] = {3,5,6,9,1,2,7,8};
    cout<<mergeSort(arr, 0, 7)<<endl;
    return 0;
}