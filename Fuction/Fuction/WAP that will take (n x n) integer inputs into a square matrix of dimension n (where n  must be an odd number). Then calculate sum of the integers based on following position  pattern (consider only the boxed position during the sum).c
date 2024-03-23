#include<stdio.h>

void fuctionalities (int n , int arr[n][n]){

int firstrow = 0;

int lastrow=0;

int diagonal1=0;
int diagonal2=0;

 for(int i=0 ; i<1 ; i++){
        for(int j=0 ; j<n ; j++){

            firstrow += arr[i][j];
            
        }
    }

    for(int i=n-1 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){

            lastrow += arr[i][j]; 
        }
    }

     for(int i=1 ; i<n-1 ; i++){
        for(int j=0 ; j<n ; j++){

          if(i == j){
            diagonal1 += arr[i][j];
          }
        }
    }

     for(int i=1 ; i<n-1 ; i++){
        for(int j=0 ; j<n ; j++){

          if(i+j == n-1){
            if(i==j){
                continue;
            }
            diagonal2 += arr[i][j];
          }
        }
    }

    int sum = firstrow + lastrow + diagonal1 + diagonal2;

    printf("%d", sum);

}

int main(){
    int n;

    printf("Enter the value of n:");
    scanf("%d" , &n);

    int arr[n][n];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(n % 2 == 0 ){
                break;
            }
            scanf("%d" , &arr[i][j]);
        }
    }

    fuctionalities(n , arr);

}
