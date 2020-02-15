//Searching Linked Lists (5-10-19)

search_linked_list(start){
	node *ptr;
	int val, flag=0, count=0;
	printf("Enter the value to search: ");
	scanf("%d", &val);
	ptr = start;
	while (ptr != NULL){
		count++;
		if(ptr -> info == val){
			flag = 1;
			break;
		}
		else{
			ptr = ptr -> link;
		}
	}
	if(flag == 0)
		printf("Value Not Present");
	else
		printf("Address of Node = %d", ptr); //ptr -> info (to print value)
		//printf("Position of Node = %d", count+1);