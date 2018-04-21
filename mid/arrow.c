#include "stdio.h"
#include "stdlib.h"
int main(){
    int num,len,spr,spl;
    scanf("%d", &num);
    len= (num*2)-1;
    spr = len-1;
    spl = 0;
    for(int i=0;i<num+2;i++){
        for(int j=0;j<len;j++){
            if(j==(len/2)){
                printf("*");
            }else if(i>=2&&j==spr&&i<(num+2)-1){
                printf("*");
                spr --;
                spl ++;
            }else if(i>=2&&j==spl&&i<(num+2)-1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}