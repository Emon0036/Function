#include<stdio.h>

void add(int m ,int  n , int arr[m][n] , int arr2[m][n]){
    int c[m][n] ;

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            c[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    printf("New array c:\n");
     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d " , c[i][j]);
        }
        printf("\n");
    }

    
  
}

int main(){

    int m ,n;

    scanf("%d%d" , &m , &n);

    int arr[m][n];
    int arr2[m][n];
    int a[m][n];

    printf("Enter the first array A :\n");
    for(int i=0;i<m;i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }

    printf("Enter the Second array B :\n");
    for(int i=0;i<m;i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr2[i][j]);
        }
    }

     add(m , n , arr , arr2);

}
