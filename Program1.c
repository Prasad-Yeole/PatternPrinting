/* 1. Accept number from user and display below Pattern.
   Input : 5
   Output: A B C D E    
*/
#include<stdio.h>

void Display(int iNo)
 {
     char iCnt='A';
     int iCntx=0;
     
     printf("The Pattern is\n");
     
     for(iCntx=1;iCntx<=iNo;iCntx++)
      {
         printf("%c\t",iCnt);
         iCnt++;
      }
 }

int main()
 {  
    int iValue=0;
    
    printf("Enter the value:\n");
    scanf("%d",&iValue);
    
    Display(iValue); 
 
    return 0;
 }
