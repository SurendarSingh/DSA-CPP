#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    int freq[26];
    for(int i=0; i<26; i++)
        freq[i]=0;
    
    for(int i=0; i<str.length(); i++)
        freq[str[i]-'a']++;

    int MaxF=0;
    char ans='a';
    for(int i=0; i<26; i++) {
        if(freq[i]>MaxF) {
            MaxF=freq[i];
            ans=i+'a';
        }
    }

    cout<<MaxF<<" "<<ans<<endl;
    return 0;
}