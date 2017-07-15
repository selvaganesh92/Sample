#include<stdio.h>
main()
{
int a,n,r,f=1,i,r1,nr,nr1,j,k,f1=1,f2=1,s;
int ncr,temp=1;
scanf("%d%d",&n,&a);
if(a<=10^9 && a<=n)
{
r=a;
}
else{return 0;}
//nr=n-r;
for(i=1;i<=n;i++)//n!
{
f=f*i;
}
for(j=2;j<=r;j+=2)
{
if(n==j)
{
temp+=1;
break;
}
else
{
r1=j;
nr=n-r1;
for(s=1;s<=r1;s++)// r fact
{
f2=f2*s;
//printf("\n 1st loop %d",f2);
}
//printf("\n r fact : %d",f2);
for(k=1;k<=nr;k++)// n-r fact
{
f1=f1*k;
//printf("\n 2nd loop: %d",f1);
}
//printf("\n nr fact: %d",f1);
ncr=f/(f2*f1);
temp=temp+ncr;
//printf("\n%d",ncr);
//printf("\n%d",j);
f1=1;f2=1;
}
}
printf("%d\n",temp);
}

