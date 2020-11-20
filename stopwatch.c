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
    printf("Enter Sec : ");
    scanf("%d",&sec);
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
                min =+ 59;
            }
              if(min!=0){
                    min--;
                    sec += 59;
                }
        }
    }while(sec!=0);
}