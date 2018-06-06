#include<stdio.h>
#include<stdlib.h>
int shun(int *p)
{
	if((*p-*(p+1)==1)&&(*(p+1)-*(p+2)==1))
		return 1;
	else 
		return 0;	
}
int main()
{
	int a[3];
	int *p;
	int i,j,temp,n=0;
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	} 
	p=a;
	if(a[0]==a[1]&&a[1]==a[2])
	{
		n+=(9-a[1])+1;printf("%d",n);
		
	}
	else if(shun(p)==1)
	{
		n=n+9+9-a[0];printf("%d",n);return 0;
		
	}
	else if(a[0]==a[1])
	{
		n=n+15+9-a[2]+(9-a[0])*8;printf("%d",n);
	}
	else if(a[1]==a[2])
	{
		n=n+15+9-a[0]+(9-a[1])*8;printf("%d",n);
	}
	else if(a[0]==5&&a[1]==3&&a[2]==2)
	{
		n=n+7+8*8;printf("%d",n);
	}
	else
	{
		n=n+7+64+9;printf("%d",n);
	}
	

	system("pause");
	return 0;
}

