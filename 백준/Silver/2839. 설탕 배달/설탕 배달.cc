#include <stdio.h>

int main() {
    int N;
    int res = 0;

    scanf("%d", &N);

    while(1) {
        if(N % 5 == 0){
            res += N/5;
            printf("%d", res);
            break;
        }

        N -= 3;
        res++;

        if(N < 0){
            printf("-1");
            break;
        }
    }
    return 0;
}