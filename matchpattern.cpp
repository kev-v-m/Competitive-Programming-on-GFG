#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char dict[n][3];
	char pattern[3];
	
	for(int i=0;i<(n+1);i++)
	gets(dict[i]);
	
	/*gets(pattern);
	int j=0;*/
	
	for(int i=0;i<(n+1);i++)
	puts(dict[i]);
	
	/*for(int i=0;i<2;i++)
	{
		if(((int)pattern[i+1]-(int)pattern[i])==((int)dict[j][i+1]-(int)dict[j][i]))
		{
			puts(dict[j]);
			for(int k=0;k<3;k++)
			printf("%c",dict[j][k]);
			j++;
		}
	}*/
	
	return 0;
}
