#include "stdio.h"
#include "ctype.h"
#include "string.h"
int main(){
    char text[201];
    char en_upper[27] = {'A','I','W','G','Z','V','F','U','T','H','S','O','J','L','K','D','E','C','N','M','R','Q','P','Y','X','B'},en_lower[27];
    scanf("%[^\n]", text);
    for(int i=0;i<27;i++){
        en_lower[i] =tolower(en_upper[i]);
    }
    for(int i=0;i<strlen(text);i++){
        if(text[i]==' '){
            printf(" ");
        }
        for(int j=0;j<27;j++){
        	int num = (j-5) < 0 ? (26+(j-5))%26:j-5;
            if(islower(text[i])&&text[i]==en_lower[j]){
                printf("%c", en_lower[num]);
            }else if(isupper(text[i])&&text[i]==en_upper[j]){
            	printf("%c", en_upper[num]);
            }
        }
    }
    printf("\n");
    return 0;
}