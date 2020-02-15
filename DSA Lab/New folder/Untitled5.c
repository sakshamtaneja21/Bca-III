//Inserting a new value after a specific value (7-10-19)

void inserting_after_value(){
	node *ptr;
	int val1, val2, flag=0;
	printf("Enter value to insert: ");
	scanf("%d", &val1);
	nw = (node *)malloc(sizeof(node));
	nw -> info = val1;
	nw -> link = NULL;
	printf("Enter value after which to insert new value: ");
	scanf("%d", &val2);
	ptr = start;
	while (ptr != NULL) {
		if (ptr -> info == val2) {
			flag = 1;
			break;
		}
		else {
			ptr = ptr -> link;
		}
	}
	if (flag == 0) {
		printf("Value Cannot be Inserted");
		exit(1);
	}
	else {
		nw -> link = ptr -> link;
		ptr -> link = nw;
	}
}