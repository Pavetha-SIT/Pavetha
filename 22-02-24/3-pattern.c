int main() {
    int n,i,j,l;
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        if(i<0)
            l=-i;
        else
            l=i;
        for(j=0;j<l+1;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

output:

* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 

int main() {
    int n,i,j,l,s;
    scanf("%d",&n);
    for(i=-n;i<=n;i++)
    {
        if(i<0)
            l=-i;
        else
            l=i;
        for(s=0;s<l;s++)
            printf("  ");
        for(j=0;j<2*(n-l)+1;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

output:
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 


int main() {
    int n,i,j,l,s;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i)<j && j<(n-i))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}

*          * 
* *        * * 
* * *      * * * 
* * * *    * * * * 
* * * * *  * * * * * 
* * * * * * * * * * * 
