#include <stdio.h>

int main(){
    char str[101][101];
    int n;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s", &str[i]);
    }

    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++) {
            if(str[i][j] != str[j][i]){
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}