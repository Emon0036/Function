#include<stdio.h>

int convert(int n){
    int f=1;
    int binary=0;
    int reminder;
    int dno = n;
 

    while(dno != 0){
        reminder = dno % 2; // reminder the number
        binary += reminder *f;  // add reminder to binary
        f*=10; // incresae the f by 10 
       dno = dno/2; // divide the number by 2
    }

    return binary;
}

int main(){

    int n;
    scanf("%d" , &n);

    int binary = convert(n);

    printf("%d" , binary);

    return 0;

}
