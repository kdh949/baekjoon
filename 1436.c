#include <stdio.h>
#include <stdbool.h>

int main() {
    int num; //시리즈 수
    int i; //반복문 사용 변수
    int temp; //6개수를 세기위해 임시로 사용하는 변수
    int count = 1; //n번째 666
    bool check; ///연속되는 666이 있는지 확인

    scanf("%d", &num);

    if (num == 1) { //첫 번째 시리즈>666 출력
        printf("666");
        return 0;
    }

    i=667;

    while(1) {
        temp = i;
        check = false;

        while (temp > 0) {
            if (temp % 1000 == 666) {
                check = true;
                break;
            }
            temp /= 10; //자릿수 축소
        }
        
        if (check) {
            count++;
            if (count == num) { //지금까지 구한 연속수의 개수와 시리즈가 일치하면
                break;
            }
        }
        i++;
    }

    printf("%d\n", i);
    return 0;
}