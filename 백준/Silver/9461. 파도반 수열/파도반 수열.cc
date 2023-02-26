#include <stdio.h>

int main()
{
    int num, s;
    long long int dp[101] = {1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };
    
    scanf("%d", &num);
    for (int a = 0; a < num; a++)
    {
        scanf("%d", &s);
        dp[0] = 1;
        dp[1] = 1;
        
        if(s < 10) {
            printf("%d\n", dp[s-1]);
        } else {
            for(int i = 10 ; i < s ; i++){
                dp[i] = dp[i-2] + dp[i-3];
            }
            printf("%lld\n", dp[s-1]);
        }
    }
    return 0;
}