#include <stdio.h>
int main()
{
	int d,m,y;
	printf("enter in order : d,m,f....:");
	scanf("%d %d %d", &d, &m, &y);
	
	if(y%400==0)
	{
		printf("leap year");
		if(m==2)
		{
			if(d<29)
				printf("%d %d %d", d+1, m, y );
			else 
				printf("%d %d %d", 1, m+1, y );
		}
		else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d<31)
				printf("%d %d %d", d+1,m,y);
			else
				printf("%d %d %d", 1,m+1,y);
		}
		else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d<30)
				printf("%d %d %d", d+1,m,y);
			else 
				printf("%d %d %d", 1,m+1,y);
		}
	}
	else if(y%4==0 && y%100!=0)
	{
			printf("leap year");
			if(m==2)
			{
				if(d<29)
					printf("%d %d %d", d+1, m, y );
				else 
					printf("%d %d %d", 1, m+1, y );
			}
			else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			{
				if(d<31)
					printf("%d %d %d", d+1,m,y);
				else
					printf("%d %d %d", 1,m+1,y);
			}
			else if(m==4 || m==6 || m==9 || m==11)
			{
				if(d<30)
					printf("%d %d %d", d+1,m,y);
				else 
					printf("%d %d %d", 1,m+1,y);		
			}
	}
	else
	{
			printf("not leap year");
			if(m==2)
			{
				if(d<28)
					printf("%d %d %d", d+1, m, y );
				else 
					printf("%d %d %d", 1, m+1, y );
			}
			else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			{
				if(d<31)
					printf("%d %d %d", d+1,m,y);
				else
					printf("%d %d %d", 1,m+1,y);
			}
			else if(m==4 || m==6 || m==9 || m==11)
			{
				if(d<30)
					printf("%d %d %d", d+1,m,y);
				else 
					printf("%d %d %d", 1,m+1,y);	
			}
	}
}
