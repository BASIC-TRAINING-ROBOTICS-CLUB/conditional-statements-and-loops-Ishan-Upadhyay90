#include<stdio.h>
int main(){
    int a,n=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    n=a;
    printf("Divisor - \n");
    while(n!=0){
        if(a%n==0){
            printf("%d \t",n);
        }
        n--;
    }
    
    return 0;
}