
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
        msd = r;            // ** NOTE : Number ke pow(10, position-1) dara vag korle oi position er digit pawa jaay. Eknon zehetu 5 digit er number bola ase Sehetu number k 10000 dara vag korlei msd pawa jabe
                            // Thus: msd = n / 10000; lekha jaay
        printf("Sum = %d\n", lsd+msd);
    }

    return 0;

}
