#include <stdio.h>

int main(){
    char s1[51]={0}, grade[5]={0};
    float time;
    float avg = 0;
    int a=0, n=0;

   for(int i=0; i<20; i++){
    scanf("%s %f %s", &s1, &time, &grade);

    for(int i=0;i<4;i++){ //ASCII 
        a+=grade[i];
    }

    if(a==108){ //A+
        avg+=4.5*time;
        n+=time;
    }

    else if(a==113){ //A0
        avg+=4.0*time;
        n+=time;
    }

    else if(a==109){ //B+
        avg+=3.5*time;
        n+=time;
    }

    else if(a==114){ //B0
        avg+=3.0*time;
        n+=time;
    }

    else if(a==110){ //C+
        avg+=2.5*time;
        n+=time;
    }

    else if(a==115){ //C0
        avg+=2.0*time;
        n+=time;
    }

    else if(a==111){ //D+
        avg+=1.5*time;
        n+=time;
    }

    else if(a==116){ //D0
        avg+=1.0*time;
        n+=time;
    }

    else if(a==70){ //F
        avg+=0*time;
        n+=time;
    }
    a=0;
   }

   avg=avg/n;

    printf("%f", avg);
    return 0;
}