#include<stdio.h>
int main(){
    int a;
    printf("Enter the Year\n");
    scanf("%d",&a);
    if(a>2000){
        printf("This is after 2000\n");
    }
    else if(a==2000){
        printf("2000 year\n");
    }
    else{
        printf("It is before 2000\n");
    }
    if(a%4==0 && (a%100!=0 || a%400==0)){
        printf("LEAP YEAR\n");
    }
    else{
         printf("NOT LEAP YEAR\n");
    }
    return 0;
}