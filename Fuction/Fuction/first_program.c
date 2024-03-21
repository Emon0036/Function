#include<stdio.h>

// pass by value 

int sum(int , int ); // function prototype

int sum(int a , int b){ // function declaration 
        // a , b function parameters              // function body
    int sum = a + b;
    return sum;
}

int main(){  

    int a ,b;
    scanf("%d%d" , &a , &b);
   int add = sum (a , b);     // function call

    printf("Sum=%d" , add);

    return 0;
}