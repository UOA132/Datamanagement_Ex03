#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int H = 0, T = 0;
    char name[30];
    printf("Who are you?");
    scanf("%s",name);
    printf("Hello, %s\n",name);
    printf("Tossing a coin...\n");
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 3; i++){
        int result = rand()%2;
        printf("Round %d: ",i + 1);
        if(result == 0){
            printf("Heads\n");
            H++;
        }
        else if(result == 1){
            printf("Tails\n");
            T++;
        }
    }
    printf("Heads: %d, Tails: %d\n",H,T);
    if(H > T)printf("%s won!\n",name);
    else if(T > H)printf("%s lost.\n",name);
}