#include <stdio.h>
int main()
{
	int s1, s2, s3;
	printf("ENTER SIDES 1, 2 AND 3 OF THE TRIANGLE");
	scanf("%d %d %d", &s1, &s2, &s3);
	if(s1==s2 && s2==s3 && s3==s1)
		printf("EQUILATERAL");
	else if(s1!=s2 && s2!=s3 && s3!=s1)
		printf("SCALENE");
	else 
		printf("ISOSCELES");
	
}
