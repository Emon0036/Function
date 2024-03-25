#include<stdio.h>

int pnumber(int n){
    int count = 0;

    for(int i=1 ; i<=n ; i++){
        if(n %i == 0){
            count++;
        }
    }

    if(count == 2){
        return 2;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    scanf("%d" , &n);

    int num = pnumber(n);

    if(num == 2){
        printf("Prime number.");
    }
    else{
        printf("It's not a prime number.");
    }

    return 0;
}
