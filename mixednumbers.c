#include<stdio.h>
void main(){
	int n,i,j,k,l,p,m,r;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			if(a[j]<a[k])
			{
				int temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		}
	}
	for(l=0;l<n/2;l++)
	{
		b[l]=a[l];
	}
	b[n/2]=a[n-1];
	for(p=n/2+1,r=2;p<n;p++,r++)
	{
		b[p]=a[n-r];
	}
	for(m=0;m<n;m++)
	{
		printf("%d\t",b[m]);
	}
}
