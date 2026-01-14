#include <stdio.h>
void main(){
    int arr[10],i,j,n,temp;
    printf("Enter no. of elements in array: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;


            }
        }
    }
printf("Sorted array in ascending order:\n");
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
printf("\n");
return 0;

}
