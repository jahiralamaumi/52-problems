
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
