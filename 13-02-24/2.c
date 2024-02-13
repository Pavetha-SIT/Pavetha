Sample Input 0

C
Language
Welcome To C!!
Sample Output 0

C
Language
Welcome To C!!'''

program:

  #include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c", &ch);
    printf("%c", ch); 
    char s[100];
    scanf("%s",&s);
    printf("\n%s",s);
    char sen[1000];
    scanf("%*c",&sen);
    fgets(sen, 100, stdin);
    printf("\n%s",sen);
       
    return 0;
}
