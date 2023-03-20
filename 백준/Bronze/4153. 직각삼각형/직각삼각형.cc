#include <stdio.h>
#include <math.h>

int main() {
int a[3];
int temp;

    for(;;){
        scanf("%d %d %d", &a[0], &a[1], &a[2]);

        if(a[0] == 0 && a[1] == 0 && a[2] == 0){
            break;
        } else{
            for(int i = 0 ; i < 3 ; i++){
                for(int j = 0 ; j < 2 ; j++){
                    if(a[j] > a[j+1]){
                        temp = a[j+1];
                        a[j+1] = a[j];
                        a[j] = temp;
                    }
                }
            }
            if(pow(a[2],2) == pow(a[1],2) + pow(a[0], 2)){
                printf("right\n");
            } else {
                printf("wrong\n");
            }
    }
}
return 0;
}