
#include<stdio.h>
#include<math.h>

void print_arr(int arr[], int size){
    int i;
    for( i = 0; i < size; i++ ){
        printf(" %4d", arr[i]);
    }
    printf("\n");
    for( i = 0; i < size; i++ ){
        printf("-----");
    }
    printf("\n");
    for( i = 0; i < size; i++ ){
        printf(" %4d", i);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void selection_sort( int arr[], int size ){
    int i, min_idx, j, t;
    for( i=0; i < size; i++){
        min_idx = i;
        for( j = i + 1; j < size; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
        /*t = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = t;*/
    }
}

int main(){
    int i, T, k, j, n, prod, a[36], size; // 100000 = 10^5 => n(n+2)+1 => n^2 + 2n + 1 => (n+1)^2 => (n+1)(n+1)
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &n);
        printf("Case %d:", i);
        for(j = 1, k = 0; j <= sqrt(n); j++){
            if( n%j == 0 ){
                a[k] = j;
                k++;
                prod = n/j;
                if(prod != j){
                    a[k] = prod;
                    k++;
                }

            }
        }
        size = k; // There was some problem. First e size=k-1 disilam. size = k dite hobe karon k er man 0 theke start hoise tohale 4 ta thakle k er man ++ er pore hoy 4 otoeb o theke start korle 4 er ag prjntoi chalate hobe loop ke...
        selection_sort(a, size);
        for(k= 0; k<size; k++){
            printf(" %d", a[k]);
        }
        printf("\n");
    }
    return 0;

}
