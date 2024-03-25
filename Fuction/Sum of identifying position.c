#include<stdio.h>

int  random(int n , int arr[n][n]){

   int  sum=0;
    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<n ; j++){
            if(i ==0 && j<n-2){
                sum += arr[i][j];
                
            }
            else if(i<n-3 && j==n-1){
                sum+=arr[i][j];
            }
            else if(i == n/2 && j<n){
                sum += arr[i][j];
            }
            else if((i>0 && i<n-1) && j==n/2){
                if(i == j){
                    continue;
                }
                
                sum+=arr[i][j];
            }
            else if(i>n/2 && j==0){
                sum += arr[i][j];
            }
            else if(i==n-1 && j>=n/2){
                sum += arr[i][j];
            }
           
        }
    }

    return sum;
}

int main(){
    int n;
    scanf("%d" , &n);

    int arr[n][n];

    for(int i=0 ; i<n;i++){
        for(int j=0 ; j<n ; j++){
            if(n % 2 == 0){
                break;
            }
            scanf("%d" , &arr[i][j]);
        }
    }

    int sum = random(n , arr);

    printf("%d" , sum);

    return 0;

    
}
