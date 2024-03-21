#include<stdio.h>

int determiant(int i , int j , int arr[i][j]){

    int result = (arr[0][0]*(arr[1][1]*arr[2][2] - arr[2][1] * arr[1][2])) - 
                 (arr[0][1]*(arr[1][0]*arr[2][2] - arr[2][0] * arr[1][2])) +
                 (arr[0][2]*(arr[1][0]*arr[2][1] - arr[2][0] * arr[1][1])) ;

    return result;             

}

int main(){

    int arr[3][3] , i , j;

    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            scanf("%d" , &arr[i][j]);
        }
    }

   

   int final =  determiant(3 , 3 , arr);

   if(final<0){
     printf("Determiant:%d" , -1*final);

   }
   else{
     printf("Determiant:%d" , final);
   }

    

   

    return 0;
}
