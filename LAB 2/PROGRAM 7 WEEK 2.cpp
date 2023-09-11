#include <stdio.h>
int main()
{
	int phy, chem, bio, mat, com;
	printf("ENTER YOUR PHYSICS MARKS");
	scanf("%d", &phy);
	printf("ENTER YOUR CHEMISTRY MARKS");
	scanf("%d", &chem);
	printf("ENTER YOUR BIOLOGY MARKS");
	scanf("%d", &bio);
	printf("ENTER YOUR MATHEMATICS MARKS");
	scanf("%d", &mat);
	printf("ENTER YOUR COMPUTER MARKS");
	scanf("%d", &com);
	int sum = phy + chem + bio + mat + com;
	int perc = (sum*100)/500;
	printf("YOUR TOTAL PERCENTAGE IS %d", perc);
	if(perc>= 90)
		printf("Grade A");
	else if(perc>= 80)
		printf("Grade B");
	else if(perc>= 70)
		printf("Grade C");
	else if(perc>= 60)
		printf("Grade D");
	else if(perc>= 40)
		printf("Grade E");
	else if(perc<= 40)
		printf("Grade f");
	
}
