#include<stdio.h>
int main(){
   int a[2][2],i;
   for (i=0;i<2;i++){
    for (int j=0;j<2;j++){
        printf("Enter the value for [%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
    }
   }
   for (i=0;i<2;i++){
    for (int j=0;j<2;j++){
        printf("%d\n",a[i][j]);
    }
   }
    return 0;
}