#include<iostream>

using namespace std;

int main() {

    // &a is the address of a 
    
    
    // Basic of pointer

    // int a=10;
    // int *aptr=&a;
    // cout<<&a<<endl;
    // cout<<aptr<<endl;
    // cout<<*aptr<<endl;
    // aptr++;  //pointer arithmetic(++/--/+/-)
    // cout<<aptr<<endl;


    // Array and Pointer

    // int arr[]={10, 20, 30}; // here arr behaves as a pointer
    // cout<<*arr<<endl; //arr intially points the 0 th index address
    // for(int i=0; i<3; i++) {
    //     // cout<<*arr<<" ";
    //     // arr++; //illegal, cause arr is the default 0th index address and we cant modify it
    //     cout<<*(arr+i)<<" "; //arr is a indexing pointer... we dont do +4i to move 4 byte... arr point the index and when we do +i, it moves to the next index
    // }cout<<endl;

    // int *ptr=arr; // we are creating an another pointer other than arr
    // for(int i=0; i<3; i++) {
    //     cout<<*ptr<<" ";
    //     ptr++; //address gets incremented and goes to the next value
    // }cout<<endl;


    // Pointer to pointer

    // int a=10;
    // int *p=&a;
    // int **q=&p;
    // cout<<*p<<endl; // 10
    // cout<<*q<<endl; // value of p i.e., address of a
    // cout<<**q<<endl; // 10 (q to p to a)

    return 0;
}