#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    getchar();
    while(tc--){
        char x[200];
        fgets(x,sizeof(x),stdin);
        int l = strlen(x);
//        printf("%d\n", l);
        if(x[l - 1] == '\n'){
            x[l - 1] = '\0';
        }
        long long sum = 0;
        for(int i = 0; i < l - 1; i++){
            sum += x[i] - '0';
        }
        if(sum % 3 == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

