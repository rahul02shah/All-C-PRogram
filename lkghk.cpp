#include <stdio.h>
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
	InsertionSort(Array,Length);
	printArray(Array,Length);
	return 0;
}
