#include <stdio.h>

int main(){
    int num;
    int n, m;
    int temp;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &n, &m);

        int cnt=0;
        int w=n;
        
        while(w<=m){
            temp=w;

            if(w==0)
                cnt++;
            
            while(temp>0){
                if(temp%10==0)
                    cnt++;
                temp/=10;
            }
            w++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}