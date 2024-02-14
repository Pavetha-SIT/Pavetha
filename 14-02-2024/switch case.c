Sample Input
5
Sample Output
five
Sample Input #01
8
Sample Output #01
eight
Sample Input #02
44
Sample Output #02
Greater than 9

program:

#include <stdio.h>

int main()
{
    int ch; 
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("one");
            break;
        case 2:printf("two");
            break;
        case 3:printf("three");
            break;
        case 4:printf("four");
            break;
        case 5:printf("five");
            break;
        case 6:printf("six");
            break;
        case 7:printf("seven");
            break;
        case 8:printf("eight");
            break;
        case 9:printf("nine");
            break;
        default:printf("Greater than 9");
    }
    return 0;
}
