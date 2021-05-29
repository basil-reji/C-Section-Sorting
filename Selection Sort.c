#include <stdio.h>
int selectionsort(int,int a[]);
int main() {
    int n;
    printf("Enter the lenth of the array for soring: ");
    scanf("%d", &n);
    int a[n],i;
    printf("Enter the array elemets: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    a[n]=selectionsort(n,a);
    printf("The sorted array = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
int selectionsort(int n, int a[]){
    int i,j,x,temp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a[n];
}