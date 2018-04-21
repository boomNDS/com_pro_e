#include "stdio.h"
// day 86400 s
// hour 3600 s
// min 60 s
int main(){
	int time, day = 0, hour = 0, mine = 0, sec = 0;
	scanf("%d", &time);
	printf("%d s = ", time);
	day = time/86400;
	time = time%86400;
	hour = time/3600;
	time = time%3600;
	mine = time/60;
	time = time%60;
	sec = time;
	printf("%d d %d h %d m %d s\n", day, hour, mine, sec);
	return 0;
}