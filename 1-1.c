
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
        for(k = 0; k < n; k++){
            for(j = 0; j < n; j++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;

}
