#include <stdio.h>
int main()
{
char u;
printf("enter the character");
scanf("%c", &u);
if(u=='a' || u=='b' || u=='c' || u=='d' || u=='e' || u=='f' || u=='g' || u=='h' || u=='i' || u=='j' || u=='k' || u=='l' || u=='m' || u=='n' || u=='o' || u=='p' || u=='q' || u=='r' || u=='s' || u=='t' ||u=='u' || u=='v' || u=='w' || u=='x' || u=='y' || u=='z' )
	{
	printf("alphabet");
	}
else if(u=='1' || u=='2' || u=='3' || u=='4' || u=='5' || u=='6' || u=='7' || u=='8' || u=='9' || u=='0')
	printf("digit");
else
	printf("special character");
}
