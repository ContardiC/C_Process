/*
Ogni processo figlio “si ricorda” il PID del processo padre che prende il nome di parent pid
o PPID. Il linguaggio C mette a disposizione due funzioni che permettono di sapere per il
processo corrente quale è il proprio PID e quale è il PID del suo genitore:

int getpid()     // PID proprio
int getppid()    // PID del padre
*/


#include<stdio.h>
#include<stdlib.h>
int main(){
    int pid;
    printf("1) Prima della fork \n ");
    pid=fork();
    printf("2) Dopo della fork \n ");
    if(pid==0){
        printf("3) Sono il processo figlio con pid: %d \n ",getpid());
        printf(" Il processo padre ha pid: %d \n", getppid());
        exit(1);
    }else{
        printf(" 3) sono il processo padre con pid: %d", getpid());
        printf(" Il processo padre ha pid: %d \n", getppid());
        exit(0);
    }
    return 0;
}