//Deleting a specific node

void delete_node(){
	node *ptr1, *ptr2;
	int val, flag;
   ptr1 = NULL;
   ptr2 = start;
	while(ptr != NULL){
		if (ptr2 -> info == val){
			flag = 1;
			break;
		}
		ptr1 = ptr2;
		ptr2 = ptr2 -> link;
	}
	ptr1 -> link = ptr2 -> link;
	free(ptr1);
	free(ptr2);
}