#include<iostream>

using namespace std;

void unique(int arr[], int n) {
    int xorsum=0,xor1st=0, xor2nd=0;
    for(int i=0; i<n; i++) {
        xorsum=xorsum^arr[i];
    }
    int setbit=0, pos=0;
    int temp=xorsum;
    while(setbit!=1) {
        setbit=temp & 1;
        pos++;
        temp = temp >> 1; // Rigth shift of xorsum
    }
    pos--;
    for(int i=0; i<n; i++) {
        if((arr[i] & (1<<pos))!=0)
            xor1st=xor1st^arr[i];
    }
    xor2nd=xorsum^xor1st;
    cout<<xor1st<<" "<<xor2nd<<endl;
}

int main() {
    int arr[]={1,2,3,7,3,5,2,1};
    unique(arr, 8);
    return 0;
}