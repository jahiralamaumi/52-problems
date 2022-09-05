
#include<stdio.h>

int main(){
    int T, i;
    char n[101];

    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf("%s", &n);

        if(n[strlen(n)-1]%2 == 0){
            printf("\teven\n");
        }
        else{
            printf("\todd\n");
        }
    }
    return 0;

}
