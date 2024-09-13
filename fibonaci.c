#include<stdio.h>

int main(){
    int a,n=0,n1=1,t,i=0;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(i<a){
        printf(" %d \t %d \t",n,n1);
        n=n+n1;
        n1=n1+n;
        i++;
    }
    
    return 0;
}