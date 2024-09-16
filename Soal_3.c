#include <stdio.h>

int main() {
    long long N = 1;
    scanf("%ld", &N);
    if ( N % 6 == 1){
        printf("PRIMA");
    }
    else if(N % 6 == 5){
        printf("PRIMA");
    }
    else if(N == 2){
        printf("PRIMA");
    }
    else if(N == 3){
        printf("PRIMA");
    }
    else {
        printf("BUKAN");
    }
    return 0;
}