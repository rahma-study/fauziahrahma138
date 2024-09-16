#include <stdio.h>
#include <string.h>

int main() {
    char string1[1000];
    char string2[1000];
    
    scanf("%s", string1);
    scanf("%s", string2);
    
    if(strcmp(string1, string2) == 0){
        printf("IDENTIK");
    }else if(strlen(string1) == strlen(string2)){
        printf("MIRIP");
    }else{
        printf("BERBEDA");
    }
}