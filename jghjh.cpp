#include <stdio.h>
struct booklist{
	char authorname[20];
	char booktitle[20];
	int cost;
};
int main(){
	struct booklist obj[4];
	int temp = 0;
	printf("{: Please Enter The 4 Book AuthorName : BookTitle And Cost :}\n");
	for (int i=0;i<=3;i++){
	printf("\nEnter The BookTitle : ");
	scanf("%d",&obj[i].authorname);
	printf("\nEnter The AuthorName : ");
	scanf("%d",&obj[i].booktitle);
	printf("\nEnter The Cost : ");
	scanf("%d",&obj[i].cost);
	}
	for (int j=0;j<=3;j++){
		temp = obj[j].cost + temp;
	}
	printf("\n Total Cost = %d",temp);
	return 0;
}
