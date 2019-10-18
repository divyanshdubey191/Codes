#include<stdio.h>
int fun(int *a,int num,int f,int l)
{
    if(l>=f)
    {
        int m;
        m=(f+l)/2;
        if(num==a[m])
            return m;
        if(num<a[m])
            return fun(*a,num,f,m-1);
        return fun(*a,num,m+1,l);
    }
    return -1;
}
void main()
{
    long int n=120000;
    int a[n];
    long int l;
    int f,m,num,i,ret;
    for(i=0;i<n;i++)
    {
        a[i]=i;
    }
    printf("Enter the number to be searched:");
    scanf("%d",&num);
    f=0;
    l=n-1;
    ret=fun(a[n],num,f,l);
    printf("Number found at:",ret);
}
