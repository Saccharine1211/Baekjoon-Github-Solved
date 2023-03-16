#include <stdio.h>

int main() {
    int n;
    int num;
    int count = 0;
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++){
        scanf("%d", &num);

        if(num == 1) {
            count++;
        } else if(num == 2) {
            continue;
        } else{
            for(int j = 2; j < num ; j++){
                if(num % j == 0) {
                    count++;
                    break;
                }
            }
        }
    }

    count = n - count;
    printf("%d", count);
}