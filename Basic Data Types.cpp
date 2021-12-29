#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    // Complete the code.

    int a;
    float b;
    char ch;
    long ln;
    double db;
    scanf("%d ",&a);
    scanf("%ld ",&ln);
    scanf("%c ",&ch);
    scanf("%f ",&b);
    scanf("%lf ",&db);

    printf("%d\n",a);
    printf("%ld\n",ln);
    printf("%c\n",ch);
    printf("%0.3f\n",b);
    printf("%0.9lf\n",db);
    return 0;
}


