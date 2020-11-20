#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int hour,min,sec;
    printf("Stop Watch\n");
    printf("Enter hour : ");
    scanf("%d",&hour);
    printf("Enter Min : ");
    scanf("%d",&min);
    if(min>59){
    while(1){
        if(min-60>=0){
            min -= 60;
            hour++;
        }
        if(min-60<0){
            break;
        }
    }
    }
    printf("Enter Sec : ");
    scanf("%d",&sec);

    if(sec>60){
    while(1){
        if(sec-60>=0){
            sec -= 60;
            min++;
        }
        if(min-60>=0){
            min -= 60;
            hour++;
        }

        if(sec-60<0&&min-60<0){
            break;
        }
    }
    }

    do{
        printf("%d : %d : %d\n",hour,min,sec);
        sleep(1);
        system("clear");
        if(sec!=0){
        sec--;
        }
        if(sec==0){
            if(min==0&&hour!=0){
                hour--;
                min =+ 60;
            }
              if(min!=0){
                    min--;
                    sec += 60;
                }
        }
    }while(sec!=0);
}
