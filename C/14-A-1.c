#include<stdio.h>
void main(){
    int n,i;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element in a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("\nReverse of array a[%d] is : %d",i,a[i]);
    }
}