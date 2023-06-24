printf("Sorting List : ");
	printf("\n1. Selection Sort\n2. Bubble Sort\n3. Insertion Sort\n");
	printf("Enter Your Choice : ");
	scanf("%d",&Choice);
	switch(Choice){
		case 1:
			printf("===================\n");
			printf("Sorted Array Is \n");
			SelectionSort(Array,Length);
			printArray(Array,Length);
		break;
		case 2:
			printf("===================\n");
			printf("Sorted Array Is \n");
			BubbleSort(Array,Length);
			printArray(Array,Length);
		break;
		case 3:
			printf("===================\n");
			printf("Sorted Array Is \n");
			InsertionSort(Array,Length);
			printArray(Array,Length);
		break;
	}
	
