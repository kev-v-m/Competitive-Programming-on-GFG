#include<stdio.h>

int main()
{
/*int test;
scanf("%d",&test);*/
	
/*for(int i=0;i<test;i++)
{*/
int m,n;
scanf("%d""%d",&m,&n);
int arr1[5],arr2[5];

for(int i=0;i<m;i++)
{
	scanf("%d",&arr1[i]);
}

for(int i=0;i<n;i++)
{
	scanf("%d",&arr2[i]);
}

int final[20];
for(int i=0;i<10;i++)
final[i]=0;

for(int i=0;i<n;i++)	
{
	for(int j=0;j<m;j++)
	{
		final[i+j]=final[i+j]+arr1[j]*arr2[i];
	}
}

	for(int i=0;i<10;i++)
	printf("%d",final[i]);

return 0;

}
