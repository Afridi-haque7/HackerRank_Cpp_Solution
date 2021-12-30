#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[n];
    
    //Taking User Input
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    
    //Printing array elements in Reverse order
    for(int j= n-1; j>=0; j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}

