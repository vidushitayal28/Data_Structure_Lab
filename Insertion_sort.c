#include <stdio.h>
void main(){
	int n,i,j,a[10],key;
	printf("Enter value of n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("Enter element for a[%d] : ",i);
	scanf("%d",&a[i]);
}
printf("Before sorting the elements in the array are\n");
for (i=0;i<n;i++){
	printf("Value of a[%d] = %d\n",i,a[i]);
		}
	for (i=0;i<n;i++){
		key = a[i];
	j=i-1;

	while (j>=0 && a[j]>key){
		a[j+1] = a [j];
		j--;
	}
	a[j+1] = key;
	}
	printf("After sorting the elements in the array are\n");
	for(i=0;i<n;i++){
		printf("Value of a[%d] = %d\n",i,a[i]);
	}
}
