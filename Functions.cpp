#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    max = (((a>b)&&(a>c)&&(a>d))?a:(((b>c)&&(b>d))?b:(c>d)?c:d));
    // This is an example of Ternary Operator. 
	//It is the easiest and most efficient way to calculate minimum and maximum of given values.
	//Syntax :- variable = Expression1 ? Expression2 : Expression3
	//For more info, visit - https://www.geeksforgeeks.org/conditional-or-ternary-operator-in-c-c/
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

