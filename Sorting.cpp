#include <stdio.h>
#include <string.h>
void Encrypt(char str[10]){
	 for(int i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3;
}

void InsertionSort(int Array[],int Length){
	int TempVar,j;
	for(int i=1;i<Length;i++){
		TempVar = Array[i];
		j = i - 1;
		while (Array[j]>TempVar){
			Array[j+1]= Array[j];
			j = j-1;
		}
		Array[j+1] = TempVar;
	}
}


void SelectionSort(int Array[], int Length)
{
    int  min_idx,SwapVar;
    for (int i = 0; i < Length-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < Length; j++)
          if (Array[j] < Array[min_idx])
            min_idx = j;
           if(min_idx != i){
           	 SwapVar = Array[min_idx] ;
           	 Array[min_idx] = Array [i];
           	 Array[i] = SwapVar;
		   }
            
    }
}

void BubbleSort(int Array[],int Length){
	int SwapVar;
	for(int i=0;i<Length;i++){
		for(int j=0;j<Length-1-i;j++){
		if(Array[j]>Array[j+1]){
			SwapVar = Array[j+1];
			Array[j+1]= Array[j];
			Array[j] = SwapVar;
		}
		 }
	}
}
void printArray(int Array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", Array[i]);
    printf("\n");
}
int main(){
	int Array[] = {2,5,8,3,1,56,34,22,9,7};
	int Length = sizeof(Array)/4;
	int Choice;
	printf("Welcome To Sorting Program\n");
	char str[10] ;
	char Match[] = {"Udkxo"};
	printf("Enter The Password : \n");
	scanf("%s",&str);
	Encrypt(str);
	if(strcmp(str, Match)==0){
		printf("\n=======================\n");
		printf("Access Granted :)\n");
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
	
	}else{
		printf("access denied");
	}
	return 0;
}
