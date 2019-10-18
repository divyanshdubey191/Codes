#include<iostream>
using namespace std;

int ternary(int l,int r,int x,int a[])
{
	if(l<r)
	{
	int mid1=l+(r-l)/3;
	int mid2=r-(r-l)/3;
	if(a[mid1]==x)
	{
		return mid1;
	}
	
	else if(a[mid2]==x)
	{
		return mid2;
	}
	else if(x<a[mid1])
	{
		return ternary(l,mid1-1,x,a);
	}
	else if(x>a[mid2])
	{
		return ternary(mid2+1,r,x,a);
	}
	else
	    return ternary(mid1+1,mid2-1,x,a);
	}
	return -1;
}

int main()
{
	int n,a[100],x,ind;
	cout<<"Enter the array size:";
	cin>>n;
	cout<<"Enter the elements of the array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the number to be searched:";
	cin>>x;
	cout<<"Number found at index:";
	ind=ternary(0,n-1,x,a);
	cin>>ind;
	
	return 0;
}
