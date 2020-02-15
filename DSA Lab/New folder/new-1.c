#include <stdio.h>
#include <conio.h>

void main(){
	int arr[20], pos, i, n, val;
	printf("Enter no. of elements in Array: ");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the position: ");
	scanf("%d", &pos);
	printf("Enter the element to insert: ");
	scanf("%d", &val);
	for (i = n-1; i >= pos-1; i--){
		arr[i+1] = arr[i];
	}
	arr[pos-1] = val;
	printf("The new array is\n");
	for (i = 0; i <= n; i++){
		printf("%d ", arr[i]);
	}
	getch();
}