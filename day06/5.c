#include<stdio.h>

#define ROW 3
#define COL 5
void array_copy(int row, int col, double dest[row][col]
                                , double src[row][col])  //row行,column列
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            dest[i][j] = src[i][j];
        }
    }
}     

void array_show(int row, int col, double arr[row][col])  //row行,column列
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%.2lf ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}  

int main()
{
    double arr1[ROW][COL] = {
        {2, 4}, 
        {6, 3, 5},
        {7 ,1 }
    };
    double arr2[ROW][COL] = {0};
    
    array_copy(ROW, COL, arr2, arr1);
    array_show(ROW, COL, arr1);
    array_show(ROW, COL, arr2);

    return 0;
}