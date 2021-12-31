#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
    string s1, s2, s3;
    string n1, n2;
    cin>>s1;
    cin>>s2;
    s3 = s1 + s2;
    int len1 = s1.length();
    int len2 = s2.length();
    cout<<len1<<" "<<len2<<endl;
    cout<<s3<<endl;
    n1 = s1;
    n1[0] = s2[0];
    n2 = s2;
    n2[0] = s1[0];
    cout<<n1<<" "<<n2;
    
    return 0;
}

