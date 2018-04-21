#include "stdio.h"
#include "string.h"
int main(){
	int life,player1,player2,len;
	char atk[100];
	scanf("%d %s",&life,atk);
	player1 = life;
	player2 = life;
	len = strlen(atk)-1;
	for(int i=0;i<=len;i++){
		if(atk[i]==atk[i+1]&&atk[i]==atk[i+2]){
			if(atk[i]%2==0){
				player2 -= 6;
				i+=2;
			}else{
				player1 -= 6;
				i+=2;
			}
		}else if(atk[i]%2==0){
			player2--;
		}else if(atk[i]%2==1){
			player1--;
		}
	}
	if(player1>player2){
		printf("0 ");
	}else if(player2>player1){
		printf("1 ");
	}else{
		printf("- ");
	}
	printf("%d %d\n", player1,player2);
	return 0;
}