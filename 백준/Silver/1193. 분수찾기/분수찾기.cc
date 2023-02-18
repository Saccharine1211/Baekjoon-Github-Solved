#include <stdio.h>

int main() {
    int sum = 0; //총합
    int a; //입력값
    int i = 1; //카운터

    scanf("%d", &a);

    do {
        sum += i;
        if(sum >= a) break;
        i++;
    } while(1);

    if(i%2==0) printf("%d/%d", i - (sum - a), 1 + (sum - a));
    else printf("%d/%d", 1 + (sum - a), i - (sum - a));
}