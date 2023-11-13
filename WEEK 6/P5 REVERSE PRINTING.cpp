//printing the elements of a string in reverse
#include <stdio.h>
int main()
{
int n=100000, i, j, count=0;
char str[n];
scanf("%s", str);
printf("initial string....%s\n", str);
for(i=0;i<n;i++)
	{
		if(str[i]!='\0')
			{
				count++;
			}
		if(str[i]=='\0')
			{
				i=n+1;
			}
	}
char cstr[n];
for(i=0;i<count;i++)
	{
		cstr[i]=str[count-i-1];
	}
for(i=0;i<count;i++)
	{
		str[i]=cstr[i];
	}
printf("printng string in reverse :\n");
printf("%s", cstr);
}
