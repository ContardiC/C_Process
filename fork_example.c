#include<stdlib.h>
#include<stdio.h>
int main(){
    int pid;
    printf("1) Prima della fork\n");
    pid=fork();
    printf("2) Dopo della fork\n");
    if(pid==0){
        printf("3) Sono il processo figlio\n");
        exit(1);
    }else{
        printf("3) Sono il processo padre\n");
        exit(0);
    }
    return 0;
}