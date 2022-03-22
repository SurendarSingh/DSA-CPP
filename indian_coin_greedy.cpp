#include<iostream>
using namespace std;

void mincoin(int n) {
    int arr[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;
    while(n) {
        for(int i = 0; i < sizeof(arr); i++) {
            if(n>=arr[i]) {
                n-=arr[i];
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}

int main() {
    mincoin(55);
    return 0;
}