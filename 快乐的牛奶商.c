#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;//n为需要牛奶量，m为农民数目
	scanf("%d %d",&n,&m);
	int i,j,temp1,temp2,price=0,bought;
	int a[5000][2];
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i][0]>a[j][0])//从小到大 
			{
				temp1=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=temp1;
				
				temp2=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=temp2;
			}	
		}
	}
	if(a[0][1]>=n)
	{
		price+=n*a[0][0];
	}
	else
	{
		bought=a[0][1];
		for(i=0;bought<=n;i++)
		{
			price+=a[i][0]*a[i][1];
			bought+=a[i+1][1];
		}
		price+=(n-bought+a[i][1])*a[i][0];
	}
	printf("%d",price);
	
	return 0;
	
	
} 

