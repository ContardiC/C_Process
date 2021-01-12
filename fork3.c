/*
Prima di mandare in esecuzione il programma, rispondi alle seguenti domande:
 ◗ Cosa ti aspetti di vedere sullo schermo?
 ◗ Quanti fi gli vengono generati?
 ◗ Perché?
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int pid1;
    int pid2;
    int pid3;
    pid1=fork();
    pid2=fork();
    pid3=fork();
    if((pid1==0)==0||(pid2==0)||(pid3==0)){
        printf("Sono il processo figlio con pid: %d \n",getpid());
        printf(" Il mio processo padre ha pid %d \n",getppid());
        sleep(1);
        exit(1);
    }else{
        sleep(2);
        printf(" Sono il processo padre: %d \n",getppid());
    }
    return 0;

}