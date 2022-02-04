#include<stdio.h>
#include<stdlib.h>
void Union();
void intersection();
void difference();
void equal();
int main()
{
int ch;
printf("\n\t\t\t--MENU--\n");
printf("\t\t\t 1.union\n\t\t\t 2.Intersection\n\t\t\t 3.difference \n\t\t\t 4.equal \n\t\t\t 5.Exit\n");
while(ch=1)
 {
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
  {
  case 1:
  Union();
  break;
  case 2:
  intersection();
  break;
  case 3:
  difference();
  break;
  case 4:
  equal();
  break;
  case 5:
  exit(0);
  break;
  default:
  printf("Enter a valid operation");
  break;
  }
 }
}
void Union()
{
    int li,lj,si[20],sj[20],s[50],i;
    printf("Enter the size of first set:");
    scanf("%d",&li);
    printf("Enter the size of second set:");
    scanf("%d",&lj);
    printf("Enter the 1st set elements:");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("Enter the 2nd set elements:");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(li!=lj)
    {
        printf("The cardinality of li != to cardinality of lj");
        printf("Union not possible");
    }
    else
    {
    printf("Union = ");
    for(i=0;i<li;i++)
    {
        s[i]=si[i] || sj[i];
    }
    for(i=0;i<li;i++)
    {
        printf("%d ",s[i]);
    }
 }
}
void intersection()
{
    int li,lj,si[20],sj[20],s[50],i;
    printf("Enter the size of first set:");
    scanf("%d",&li);
    printf("Enter the size of second set:");
    scanf("%d",&lj);
    printf("Enter the elements:");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("Enter the elements:");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(li!=lj)
    {
        printf("The cardinality of li != to cardinality of lj");
        printf("Intersecion not possible");
    }
    else
    {
    printf("Intersection = ");
    for(i=0;i<li;i++)
    {
        s[i]=si[i] && sj[i];
    }
    for(i=0;i<li;i++)
    {
        printf("%d",s[i]);
    }
    }
}
void difference()
{
    int li,lj,si[20],sj[20],s[50],i;
    printf("Enter the size of first set:");
    scanf("%d",&li);
    printf("Enter the size of second set:");
    scanf("%d",&lj);
    printf("Enter the elements:");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("Enter the elements:");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(li!=lj)
    {
        printf("The cardinality of li != to cardinality of lj");
        printf("Difference not possible");
    }
    else
    {
    printf("Difference = ");
    for(i=0;i<li;i++)
    {
        s[i]=si[i] - sj[i];
    }
    for(i=0;i<li;i++)
    {
        printf("%d",s[i]);
    }
    }
}
void equal()
{
    int li,lj,si[20],sj[20],i,x=0;
    printf("Enter the size of first set:");
    scanf("%d",&li);
     printf("Enter the size of second set:");
    scanf("%d",&lj);
    printf("Enter the elements:");
    for(i=0;i<li;i++)
    {
        scanf("%d",&si[i]);
    }
    printf("Enter the elements:");
    for(i=0;i<lj;i++)
    {
        scanf("%d",&sj[i]);
    }
    if(li!=lj)
    {
        printf("The cardinality of li != to cardinality of lj");
        printf("Equality not possible");
    }
    else
    {
    for(i=0;i<li;i++)
    {
        if(si[i]!=sj[i])
        {
         x++;
        }
    }
    if(x>0)
    {
        printf("not equal set");
    }
    else
    {
      printf("Equal set");
    }
  }
}



