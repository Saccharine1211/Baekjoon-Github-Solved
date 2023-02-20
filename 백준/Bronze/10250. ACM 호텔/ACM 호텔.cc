#include <stdio.h>

int main() {
    int T;
    int H, W, N;

    scanf("%d", &T);

    for(int i = 0 ; i < T ; i++){
        scanf("%d %d %d", &H, &W, &N);

        if(N % H == 0) printf(
            "%d%02d\n",
            H, //층
            N / H//호수
        );
        else 
        printf(
            "%d%02d\n",
            N % H, //층
            N / H + 1//호수
        );
        
    }
}