
#include<stdio.h>

int main(){

    int i, j, count = 1000;
    for(i=1000; i>=1; i--){
        if(i<1000 && i%5==0) printf("\n");
        printf("%4d\t", i);
    }

    return 0;

}
