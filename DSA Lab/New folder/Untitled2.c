//Inserting new node at the Beginning (4-10-19)

void insert_at_start(){
	node *ptr;
	int val;
	ptr = (node *)malloc(sizeof(node));
	printf("enter value to be inserted: ");
	scanf("%d", &val);
	ptr -> info = val;
	ptr -> link = NULL;
	ptr -> link = start;
	start = ptr;
	free(ptr); //ptr = NULL;
}

//follow sequence