#include<stdio.h>

void prinarray(  int size1 , int size2 , int arr[size1][size2] ){

    for(int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            printf("%d" , arr[i][j]);
        }
    }
    printf("\n");

    for(int i=0 ; i<size2 ; i++){
        for(int j=0 ; j<size1 ; j++){
            printf("%d" , arr[j][i]);
        }
    }


}

int main(){
    int m , n;

    printf("Enter m and n :\n");
    scanf("%d %d" , &m , &n);

    int arr[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , &arr[i][j]);
        }
       // printf("\n");
    }

    prinarray( m , n , arr);

    return 0;
}