#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k,i,j;
    /*
    	n = the number of variable-length arrays; q = the number of queries; k = k- element array
    	i, j = array index
    */
    cin>>n>>q;
    
    vector<vector<int>> a(n);
    //Vector is array-type element. Included in <vector> header.
    
   for( i=0; i<n; i++){
        cin>>k;
        //Taking user-input for array size
        a[i].resize(k);
        
        for( j=0; j<k; j++){
            cin>>a[i][j];
            //Taking user-input for array elements
        }
    }
    
    for(int m=0; m<q; m++){
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    
    return 0;
}
