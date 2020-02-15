//Stack using Array - (12-10-19)

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int stack[10];
void push(){
	int top = -1, val;
	printf("Enter element to insert: ");
	scanf("%d", &val);
	if (top == 10-1){
		printf("Overflow");
		exit(1);
	}
	else{
		top = top+1;
		stack[top] = val;
	}
}


void display(){
	int i;
	for(i = top; i >= 0; i--){
		printf("%d", stack[i]);
	}
}

void main(){
	printf("18BCAN024\n\n");
	push();
	getch();
}