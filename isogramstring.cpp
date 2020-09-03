#include<stdio.h>
#include<string.h>

void isogram()
{
	char str[1000];
	gets(str);
	int len=strlen(str);
	int check=0;
	
	for(int i=0;i<(len-1);i++)
	{
		for(int j=(i+1);j<len;j++)
		{
			if(str[i]==str[j])
			{
				check++;
				break;
			}
			
		}
		if(check==0 && i==(len-2))
		printf("1");
		
	}
	if(check!=0)
	printf("0");	
}

int main()
{
	int t;
	printf("test");
	scanf("%d",&t);
	
	for(int i=0;i<++t;i++)
	isogram();
	
	return 0;
}

