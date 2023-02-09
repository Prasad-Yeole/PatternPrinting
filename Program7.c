/* 1.Accept number of rows and columns from user and Display below Pattern.
Input: iRow=4 iCol=3
       1 2 3
       1 2 3
       1 2 3
       1 2 3
*/

#include<stdio.h>

void Display(int iRow,int iCol)
 {
     int i=0,j=0;
     printf("The pattern you want to print is:\n");
     
     for(i=1;i<=iRow;i++)
      {
         for(j=1;j<=iCol;j++)
          {
             printf("%d\t",j);
          }
         printf("\n");
      }          
 } 

int main()
 {
    int nRow=0,nCol=0;
    
    printf("Enter the number of rows\n");
    scanf("%d",&nRow);
    
    printf("Enter the number of columns\n");
    scanf("%d",&nCol);
    
    Display(nRow,nCol);
    return 0;
 }

