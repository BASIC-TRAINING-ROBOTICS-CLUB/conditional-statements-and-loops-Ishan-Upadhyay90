#include<stdio.h>
int main(){
   int a[10],even=0,odd=0,o[10],e[10];
   printf("Enter 10 elements\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e[even]=a[i];
            even++;
            
        }
        else{
            o[odd]=a[i];
            odd++;
        }
    }
    printf("even=\n");
     for( int i=0;i<even;i++){
        printf("%d\n",e[i]);
    }
     printf("odd=\n");
     for(int i=0;i<odd;i++){
        printf("%d\n",o[i]);
    }
   
    printf("even =%d odd= %d",even,odd);
    return 0;
}