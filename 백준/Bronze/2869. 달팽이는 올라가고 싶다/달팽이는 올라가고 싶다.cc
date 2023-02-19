#include <stdio.h>

int main() {
    int A, B, V;
    
    scanf("%d %d %d",&A, &B, &V);
    
    if(A == V) printf("1");
    else if ((A - B) + A >= V) printf("2");
    else printf("%d", (V - B - 1) / (A - B) +1);
}