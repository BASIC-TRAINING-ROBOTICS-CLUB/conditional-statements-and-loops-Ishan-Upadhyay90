#include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if(a==0){
        printf("This is zero\n");

    }
    else if(a%2==0){
        printf("This is even number\n");

    }
    else{
        printf("This is odd number\n");
    }
    return 0;
}