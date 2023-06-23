#include<stdio.h>
#include<stdlib.h>
int shift(int a[],int left,int right){
    while(left<=right){
        if(a[left]<0 && a[right]<0){
            left+=1;
        }
        else if(a[left]>0 && a[right]<0){
            int temp;
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left+=1;
            right-=1;
        }
        else if(a[left]>0 && a[right]>0){
            right-=1;
        }
        else{
            left+=1;
            right-=1;
        }
        
    }
}
void display(int a[],int right){
    int i;
    for(i=0;i<=right;++i){
        printf("%d",a[i]);
    }
}
int main(){
    int i,n,a[100];
    printf("enter the size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    shift(a,0,n-1);
    display(a,n-1);
    return 0;


}