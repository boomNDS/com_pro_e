#include <stdio.h>
#include <ctype.h>
int main ()
{
	char text[2];
	scanf("%s", text);
	if(isdigit(text[0])){
		printf("number\n");
	}else if(islower(text[0])){
		printf("lowercase\n");
	}else if(isupper(text[0])){
		printf("uppercase\n");
	}else{
		printf("error\n");
	}
	return 0;
}