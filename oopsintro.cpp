#include<iostream>
using namespace std;

class student {
    string name;
    public:
    int age;
    bool gender;

    // Default Constructor
    student() {
        cout<<"Default Constructor"<<endl;
    }

    // Parameterised Constructor
    student(string s) {
        cout<<"Parameterised Constructor"<<endl;
        name = s;
    }

    student(string s, int a, bool g) {
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // Copy Constructor
    student(student &a) {
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Destructor
    ~student() {
        cout<<"Destructor called"<<endl;
    }

    // Operator overloading
    bool operator == (student &a) {
        if(name == a.name && age == a.age && gender == a.gender) {
            return true;
        }
        else {
            return false;
        }
    }

    void getName() {
        cout<<name<<endl;
    }

    void setName(string s) {
        name = s;
    }

    void printInfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main() {
    // student arr[3];
    // string s;
    // for(int i=0; i<3; i++) {
    //     cout<<"Enter name:";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Enter age:";
    //     cin>>arr[i].age;
    //     cout<<"Enter gender:";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0; i<3; i++) {
    //     arr[i].printInfo();
    // }

    // student a("Surendar");
    // a.getName();

    student a("Surendar", 18, 0); 

    student b; // calls default constructor

    student c = a; // or student c(a);

    if(c==a) {
        cout<<"Same"<<endl;
    }
    else {
        cout<<"Not same"<<endl;
    }

    return 0;
}