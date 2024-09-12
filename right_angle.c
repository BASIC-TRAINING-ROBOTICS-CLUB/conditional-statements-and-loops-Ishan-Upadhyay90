#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Three Sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c){
        printf("This is Right angle  triangle\n");

    }
    
    else{
        printf("This is not Right angle triangle \n");
    }
    return 0;
}