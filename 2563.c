#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; //색종이 수
    int paper[100][100]={0}; //색종이 시작 좌표

    int result=0; //색종이 총 면적

    scanf("%d", &n);

    int x, y;

    for(int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        for (int j = 0; j < 10; j++) {
            for(int k=0; k<10; k++){
            paper[x+j][y+k] = 1;
            }
        }
    }
    
    for (int i = 0; i<100; i++) {
        for(int j=0; j<100; j++){
            result+=paper[i][j];
        }
    }
    
    printf("%d", result);

    return 0;
}