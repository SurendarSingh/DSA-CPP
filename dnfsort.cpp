#include<iostream>
using namespace std;

void dnfsort(int arr[], int n) {
    int low = 0, high = n-1, mid = 0;
    while(mid<=high) {
        if(arr[mid]==0) {
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }
        else if(arr[mid]==2) {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
        else {
            mid++;
        }
    }
}

int main() {
    // Only 3 numbers can be taken in array to sort using DNF Sort
    int arr[] = {0,2,0,1,2,0,0,1,1,2}; 
    dnfsort(arr, 10);
    for(int i=0; i<10; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}