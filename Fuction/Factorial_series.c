#include<stdio.h>

int fac(int n){
    int k=n;
    int f=1;
    int mul=1; // I had done mistake here
     while(f <= k){  // I had done mistake here

        mul *= k;
        k--;      // I had done mistake here

     }

     return mul;
}

int main(){
    int sum;

    sum = fac(1)/1 + fac(2)/2 + fac(3)/3 + fac(4)/4 + fac(5)/5 ;

    printf("Sum of the series:%d" , sum);
    return 0 ;
}
