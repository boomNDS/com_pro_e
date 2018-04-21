#include <stdio.h>
#include <string.h>
int main () {
   char str1[15];
   char str2[15];
   int ret;
   strcpy(str1, "Alberto Morales");
   strcpy(str2, "Andre Gilbert");
   ret = strcmp(str1, str2);
   if(ret < 0) {
      printf("%s is less than %s",str1,str2);
   } else if(ret > 0) {
      printf("%s is less than %s",str2,str1);
   } else {
      printf("%s is equal to %s",str1,str2);
   }
   
   return(0);
}