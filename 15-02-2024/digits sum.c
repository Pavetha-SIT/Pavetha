Sample Input 0

10564
Sample Output 0

16

program:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    sum += n / 10000;      
    sum += (n / 1000) % 10; 
    sum += (n / 100) % 10;  
    sum += (n / 10) % 10;   
    sum += n % 10; 
    printf("%d",sum);
    return 0;
}
