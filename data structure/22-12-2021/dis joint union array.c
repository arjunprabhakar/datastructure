#include<stdio.h>
#include<stdlib.h>
int s[100];
int find(int x);
void unio(int c,int d)
{   int a,b;
    a=find(c);
    b=find(d);
    if(a!=b)
    {
        s[b]=a;
    }
}
int find(int x)
{
    if(s[x]==0)
    {
        return x;
    }
    else
    {
        find(s[x]);
    }
}
void disp(l)
{int i;
    for(i=1;i<=l;i++)
    {
        printf("%d ",s[i]);
    }
}
void main()
{
    int s[100],x,y,l,i,ch;
    printf("enter the limit:");
    scanf("%d",&l);
    printf("enter the array elements:");
    for(i=1;i<=l;i++)
    {
        scanf("%d",&s[i]);
    }
    do
    {
    printf("enter the indexes:");
    scanf("%d%d",&x,&y);
    unio(x,y);
    disp(l);
    printf("\n Enter 1 to continue:");
    scanf("%d",&ch);
    }
    while(ch==1);
}
