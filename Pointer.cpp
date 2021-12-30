#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function 
    int tempa = *a;
    int tempb = *b;
    
    *a = (tempa + tempb);
    *b = abs(tempa - tempb);
	//abs() function declared inside the Math.h header.
	//It will give the absolute calculated value, irrespective of the sign.
	//This method is the most efficient to solve this problem.  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

