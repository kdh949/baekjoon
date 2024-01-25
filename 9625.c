#include <stdio.h>

int main(){
    int num;
    int a=1, b=0;
    int temp_a, temp_b;

    scanf("%d", &num);

    temp_a = a;
    temp_b = b;

    //A > B , a=1, b=0 > a=0, b=1 => a--, b++
    //B > BA, a=0, b=1 > a=1, b=1 => a++

    for(int i=0; i<num; i++){
        while(temp_a != 0 || temp_b != 0){
            if(temp_a > 30){
                a-=30;
                b+=30;
                temp_a-=30;
            }
            else if(temp_a > 0){
                a--;
                b++;
                temp_a--;
            }
            else if(temp_b > 30){
                a+=30;
                temp_b-=30;
            }
            else if(temp_b > 0){
                a++;
                temp_b--;
            }
        }

        temp_a = a;
        temp_b = b;
    }

    printf("%d %d", a, b);
    return 0;
}