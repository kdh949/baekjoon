#include <stdio.h>

int main(){
    int arr[1000];
    int num, student;
    int cnt;

    float avg=0;
    float percent;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        avg=0;
        cnt=0;
        percent=0;

        scanf("%d", &student);

        for(int j=0; j<student; j++){
            scanf("%d", &arr[j]);
            avg+=arr[j];
        }

        avg/=student;

        for(int j=0; j<student; j++){
            if(avg<arr[j]){
                cnt++;
            }
        }
        percent=(cnt/(float)student)*100;
        printf("%.3f%%\n", percent);
    }
}