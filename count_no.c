#include<stdio.h>
int main(){
    int a,n=0,sum=0,t;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a!=0){
        t=a%10;
        sum=sum+t;
        n++;
        a=a/10;
    }
    printf("sum = %d \t count = %d \n",sum,n);
    return 0;
}