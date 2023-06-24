#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 3
#define COL 2

int (*(f_MatTrans)(int mat[][COL], int r, int c))[COL];

int main(void)
{
int x[2][2]={1,2,3,4};
int (*a)[2];
a=f_MatTrans(x,2,2);

for(int i=0; i<2; i++)
{
    for(int j=0; j<2; j++)
    {
        printf("X[%d][%d]=%d\n",i,j,x[i][j]);
        printf("A[%d][%d]=%d\n",i,j,a[i][j]);
    }
}

return 0;
}

int (*(f_MatTrans)(int mat[][COL], int r, int c))[COL]
{
int a[c][r];

for(int i=0; i<r; i++)
{
    for(int j=0; j<c; j++)
    {
        a[j][i]=mat[i][j];
    }
}

return a;

}
