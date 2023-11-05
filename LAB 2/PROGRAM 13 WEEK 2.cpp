#include <stdio.h>
int main()
{
	char u;
	scanf("%c", &u);
	if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u' )
		printf("vowel");
	else
		printf("consonant");
}
