#include<stdio.h>

void multiplication(int m , int n ,int  arr1[m][n] ,int  arr2[m][n]){

    int result[m][n];
    int sum = 0;

    
  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        for(int k=0 ; k<n ; k++){
            sum += arr1[i][k] * arr2[k][j];
        }

        result [i][j] = sum;
        sum=0;
    }
  }

  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ;j++){

         printf("%d " , result[i][j]);

    }
    printf("\n");
  }   
    }
    
    


int main(){

    int m=3 , n=3;

    int arr1[m][n];
    int arr2[m][n];

    printf("Enter the first array A :\n");
    for(int i=0;i<m;i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr1[i][j]);
        }
    }

    printf("Enter the second array B :\n");
    for(int i=0;i<m;i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr2[i][j]);
        }
    }

    multiplication(m , n , arr1 , arr2);

}

