//converting uppercase elements of a string to lowercase
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
char alpha[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for(i=0;i<count;i++)
	{
		for(j=0;j<26;j++)
			{
				if(str[i]==alpha[j])
					{
						str[i]=str[i]+32;
					}
			}
	}
printf("printng string after conversion from upper case to lower case :\n");
printf("%s", str);
}
