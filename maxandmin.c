#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int maxandmin(int a[],int n){
    int max,min,i;
    max=min=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
        max=a[i];
        }
        if(min>a[i]){
        min=a[i];
        }
    }
    printf("Maximum element is %d\n",max);
    printf("minimum element is %d\n",min);

}
int main(){
    int a[100],n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    maxandmin(a,n);

}

