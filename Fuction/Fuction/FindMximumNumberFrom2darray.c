#include<stdio.h>

void maximum(int m , int n , int arr[m][n]){

    int max = arr[0][0];
    int index=0;
    int index2=0;
   
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
               index = i;
               index2=j;
            }
        }

    }

     printf("%d\n" ,max);

     printf("%d %d" , index , index2);



}

int main(){
    int m , n;

    printf("Enter the value of n and m:");
    scanf("%d%d" , &m , &n);

    int arr[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d" , & arr[i][j]);
        }
    }

    maximum(m , n , arr);

    return 0;
}
