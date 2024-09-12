#include<stdio.h>
int main(){
    int a,b;
    printf("Enter X and Y cordinates\n");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        printf("This is First Quandrant\n");

    }
    
    else if(a<0 && b>0){
        printf("This is Second Quandrant\n");

    }
    else if(a<0 && b<0){
        printf("This is Third Quandrant\n");

    }
    else if(a>0 && b<0){
        printf("This is Fourth Quandrant\n");

    }
    else {
        printf("This is on Axis\n");

    }
    return 0;
}