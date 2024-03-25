#include<stdio.h>

int check(int n){
    
    int rem , sum=0;

    while(n != 0){
        rem = n%10;
        sum += rem * rem * rem;
        n = n/10;
    }
    return sum;
}



int check2(int n){

    int sum = 0;

    for(int i=1 ; i<=n ; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;

}

int main(){
    int n;

    scanf("%d" , &n);

    int perfect = check(n);

    if(perfect == n){
        printf("%d is a Armastrong number\n" , n);
    }
    else{
        printf("%d is not a Aramstrong number\n" , n);
    }

    int perfect2 = check2(n);

    if(perfect2 == n){
        printf("It's a perfect number.\n");
    }
    else{
        printf("It's not a perfect number.\n");
    }

    return 0;
}
