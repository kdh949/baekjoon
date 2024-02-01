#include <stdio.h>

int main(){
    char str[5][16];

    int len_max=0;
    int temp=0;
    int j=0;

    for(int i=0;i<5;i++){
        scanf("%s",&str[i]);
        
        while (str[i][j]!='\0') {
            temp++;
            j++;
        }

        if (temp>len_max){
            len_max=temp;
        }

        temp=0;
        j=0;
    }

    for (int i = 0; i < len_max; i++) {
        for (int j = 0; j < 5; j++){
            if(str[j][i]!='\0'){
                printf("%c", str[j][i]);
            }
            else {
                str[j][i+1]='\0'; //강제 NULL문자 대입>오버리딩 방지
            }
        }
    }
    return 0;
}