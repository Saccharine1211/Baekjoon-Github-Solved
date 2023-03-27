#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2) return -1;
    if(num1 > num2) return 1;
    return 0;
}

int main() {
    int N[1000000], n;
    int pivot;
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &N[i]);
    }
    qsort(N, n, sizeof(int), compare);
    for(int i = 0 ; i < n ; i++){
        printf("%d\n", N[i]);
    }
}