#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d" , &n);

    int arr[n][n];

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j){
                printf("1");
            }
            else{
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
