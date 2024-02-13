Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0

program:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d",a+b,a-b);
	  printf("\n%.1f %.1f",c+d,c-d);
    
    return 0;
}
