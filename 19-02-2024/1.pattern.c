int main()
{
int a=5,i,j;
for(i=0;i<=a;i++)
{
for(j=0;j<i;j++)
{
printf("* ");
}
printf("\n");
}
}

output
* 
* * 
* * * 
* * * * 
* * * * * 

int main() {
    int a=5,i,j;
for(i=0;i<=a;i++)
{
for(j=0;j<i;j++)
{
printf("%d ",i);
}
printf("\n");
}
} 

output:
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

int main() {
    int a=5,i,j;
for(i=0;i<=a;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
printf("\n");
}
} 

output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

int main() {
    int a=5,i,j,k=1;
    for(i=0;i<a;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
} 

output:
1 
2 3 
4 5 6 
7 8 9 10 
