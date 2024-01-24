#include <stdio.h>

int main(){
    char str[101]; //문장
    int count=0; //알파벳 개수
    int i=0; //반복문 사용 변수

    scanf("%s", &str); //입력

    while (str[i]!=NULL) //문장의 끝까지 반복
    {
        /*각 문장의 시작이 크로아티아 알파벳과 일치할 때> 다음 글자가 특수기호 또는 크로아티아 알파벳 문자열인 경우
        +1 카운트 후 해당 부분 건너뜀 */

        if(str[i]=='c'){
            if(str[i+1]=='='||str[i+1]=='-'){ //c= / c-
                count++;
                i+=2;
                continue;
            }
        }

        else if(str[i]=='d'){
            if(str[i+1]=='z'){
                if(str[i+2]=='='){ //dz=
                    count++;
                    i+=3;
                    continue;
                }
            }
            if(str[i+1]=='-'){ //d-
                count++;
                i+=2;
                continue;
                }
        }
        else if(str[i]=='l'){
            if(str[i+1]=='j'){ //lj
                count++;
                i+=2;
                continue;
            }
        }
        else if(str[i]=='n'){
            if(str[i+1]=='j'){ //nj
                count++;
                i+=2;
                continue;
            }
        }

        else if(str[i]=='s'){
            if(str[i+1]=='='){ //s=
                count++;
                i+=2;
                continue;
            }
        }

        else if(str[i]=='z'){
            if(str[i+1]=='='){ //z=
                count++;
                i+=2;
                continue;
            }
        }

        count++;
        i++;
    }
    
    printf("%d", count);
    return 0;
}