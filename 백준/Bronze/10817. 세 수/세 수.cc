#include <stdio.h>

int main() {
    int a[3];
    int temp;
    int n = 2;

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for(int j = 0 ; j < 2 ; j++){
        for(int i = 0 ; i < n ; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        } else {
            continue;
        }
    }
    n--;
    }
    
    printf("%d", a[1]);
}