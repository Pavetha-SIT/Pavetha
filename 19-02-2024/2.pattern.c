int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

output:
* * * * * 
* * * * 
* * * 
* * 
*


int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

output:
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0)||(i==n-1)||(j==0)||(j==n-1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

output:
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

int main() {
    int n,i,j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i-1;s++)
        {
            printf("  ");
        }
        for(j=0;j<i*2+1;j++)
        {
            printf("* ");
        }
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
