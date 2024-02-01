#include <stdio.h>

int main(){
    int n, m;
    int count=0;
    int is_X=0;

    char ch[51][51];

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        scanf("%s", &ch[i]);
    }

    for(int i=0; i<n; i++){
        is_X=0;
        for(int j=0; j<m; j++){
            if(ch[i][j]=='X'){
                is_X=1; //가로만 경비원
                if(is_X==2){
                    is_X=3; //가로, 세로 모두
                }
            }
            if(ch[j][i]=='X'){
                is_X=2; //세로만 경비원
                if(is_X==1){
                    is_X=3; //가로, 세로 모두
                }
            }
        }
        //if(is_X==1 || is_X==2){
        //        count++;
        //}
        if(is_X==0){count++;}
    }

    printf("%d", count);
    return 0;
}