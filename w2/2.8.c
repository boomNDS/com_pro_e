#include "stdio.h"
int main()
{
	char name[31], lastname[31], st_id[10];
	int dd, mm, yy;
	float gpa;
	scanf("%s", name);
	scanf("%s", lastname);
	scanf("%s", st_id);
	scanf("%d/%d/%d", &dd, &mm, &yy);
	scanf("%f", &gpa);
	printf("Fullname: %s %s\n", name,lastname);
	printf("ID: %s\n", st_id);
	printf("DOB: %02d-%02d-%02d\n", dd,mm,yy);
	printf("GPA: %.2f\n", gpa);
	return 0;
}