#include<stdio.h>
int intersect()
{
	int x1,y1,x2,y2,x3,y3,x4,y4;
printf("enter first line");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
printf("enter second line");
scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

float m1,m2;
m1=(y2-y1)/(x2-x1);	
m2=(y4-y3)/(x4-x3);	
float y,q;
float c1=y1-(m1*x1);
float c2=y3-(m2*x3);
float c=c2-c1;
float m=m1-m2;
float x=(c)/(m);
y=(m1*x)+c1;
q=(m2*x)+c2;
if(y==q)
return 1;
else 
return 0;
}


int main()
{
/*int x1,y1,x2,y2,x3,y3,x4,y4, t;
printf("no of cases");
scanf("%d",&t);
printf("enter first line");
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
printf("enter second line");
scanf("%d %d %d %d",&x3,&y3,&x4,&y4);

float m1,m2;
m1=(y2-y1)/(x2-x1);	
m2=(y4-y3)/(x4-x3);	
float y,q;
float c1=y1-(m1*x1);
float c2=y3-(m2*x3);
float c=c2-c1;
float m=m1-m2;
float x=(c)/(m);
y=(m1*x)+c1;
q=(m2*x)+c2;
if(y==q)
printf("1");
else 
printf("0");*/
int t;
printf("no of cases");
scanf("%d",&t);
for(int i=0;i<t;i++)
printf("%d",intersect());
		
return 0;	
}
