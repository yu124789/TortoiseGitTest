#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
    srand((unsigned)time(NULL));
    while(1){
        system("cls");
        if (int i = rand()%5){
            printf("o_ o\n\t");
        }else{
            printf("-_ -\n\t");
        }
        Sleep(200);
    }
    return 0;
}