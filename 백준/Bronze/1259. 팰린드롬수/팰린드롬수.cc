#include <stdio.h>
#include <string.h>

int main() {
    char a[100000];
    int i, len;

    while(1){
        scanf("%s", a);
        len = strlen(a);

        if(a[0] == '0' && a[1] == '\0') {
            break;
        } else {
            for(i = 0; i < strlen(a) ; i++){
                if(a[i] != a[strlen(a) - i - 1]){
                    printf("no\n");
                    break;
                }

                if(i == strlen(a) - 1){
                    printf("yes\n");
                }
            }
        }
    }
}