#include <stdio.h>

int main(){
    char str[1000001];
    int count = 1;
    int i=0;

    gets(str);

    if(str[0] == ' '){ //처음에 공백이 있다면 공백개수=단어개수
        count = 0;
    }

    while(str[i]!=NULL) {
        if(str[i] == ' '){
            if(str[i+1]!=' '&&str[i+1]!=NULL){ //공백 뒤에 글자 또는 끝이라면 카운트+1
                count++;
            }
        }
        i++;
    }

    printf("%d", count);
    return 0;
}