#include "stdio.h"
#include "string.h"
#include "ctype.h"
typedef struct {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
} Weather;
int main(){
	int num;
	scanf("%d",&num);
	Weather day[num];
	for(int i=0;i<num;i++){
		scanf("%c %d %d %c\n",day[i].outlook,&day[i].temperature,&day[i].humidity,&day[i].wind);
		if(strcmp(day[i].outlook, "overcast")==0){
			printf("yes\n");
		}else if(strcmp(day[i].outlook, "rain")==0){
			if( day[i].wind == 'F'){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		}else if(strcmp(day[i].outlook, "sunny")==0){
			if(day[i].humidity > 77.5){
				printf("no\n");
			}else{
				printf("yes\n");
			}
		}
	}
	return 0;
}
// void playing_decision(struct Weather){
// 	if(strcmp(Weather.outlook, "overcast")==0){
// 		printf("yes\n");
// 	}else if(strcmp(Weather.outlook, "rain")==0){
// 		if(strcmp(Weather.wind, "F")==0){
// 			printf("yes\n");
// 		}else{
// 			printf("no\n");
// 		}
// 	}else if(strcmp(Weather.outlook, "sunny")==0){
// 		if(Weather.humidity > 77.5){
// 			printf("no\n");
// 		}else{
// 			printf("yes\n");
// 		}
// 	}
// }