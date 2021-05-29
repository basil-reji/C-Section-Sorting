#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the lenth of the array for soring: ");
    scanf("%d", &n);
    int a[n],temp;
    printf("Enter the array elemets: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}