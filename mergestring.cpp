#include<stdio.h>
#include<string.h>

void mergestring()
{
	char s1[1000],s2[1000],s3[2000];
	printf("enter s1");
	scanf("%s",&s1);

	printf("enter s2");
	scanf("%s",&s2);
	
	int n1=strlen(s1);
	int n2=strlen(s2);
	
	int total=n1+n2; 
	int c1=0,c2=0,c3=0;
	
	for(int i=0;i<total;i++)
	{
		if(i%2==0)
		{
			s3[c3]=s1[c1];
			c1++;
			c3++;
		}
		else
		{
			s3[c3]=s2[c2];
			c2++;
			c3++;
		}
	}
		
	for(int i=0;i<total;i++)
	printf("%c",s3[i]);
}

int main()
{
int t;
printf("cases");
scanf("%d",&t);

if(t>=1 && t<=100)
{
	for(int i=0;i<t;i++)
	mergestring();
}

return 0;
}
