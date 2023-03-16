#include <stdio.h>

int main() {
    int x1, y1, w, h;
    int d; //distance
    
    scanf("%d %d %d %d", &x1, &y1, &w, &h);

    w = x1 < w - x1 ? x1 : w - x1;
    h = y1 < h - y1 ? y1 : h - y1;

    d = w < h ? w : h;

    printf("%d", d); 
    
}