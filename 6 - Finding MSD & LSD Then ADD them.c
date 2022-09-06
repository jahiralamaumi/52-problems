
#include<stdio.h>
#include<math.h>




int main(){
    int T, i, n, lsd, msd, a, r;
    scanf("%d", &T);

    for( i = 0; i < T; i++){
        scanf("%d", &n);
        lsd = n % 10;
        a = n;
        while(a != 0){
            r = a % 10;
            a = a / 10;
        }
        msd = r;
        printf("Sum = %d\n", lsd+msd);
    }

    return 0;

}
