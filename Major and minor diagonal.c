#include<stdio.h>

void mmdiagonal(int size , int arr[size][size]){

    printf("Minor diagram:");
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
           if(i==j){
            printf("%d " , arr[i][j]);
           }
        }
    }
    printf("\n");

     printf("Major diagram:");

     for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
           if(i+j == size-1){
            printf("%d " , arr[i][j]);
           }
        }
    }

}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d" , &n);

    int arr[n][n];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , & arr[i][j]);
        }
    }

    mmdiagonal(n , arr);
    return 0;
} 
