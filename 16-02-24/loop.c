do while loop:

#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    do
    {
        printf("\n%d ",a);
        a=a+1;
    }
    while(a<=10);
    return 0;
}

for loop

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}

while loop:

int main () {
   int a = 1;
   while( a <=5 ) {
      printf("%d",a);
      a++;
   }
   return 0;
}
