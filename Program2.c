/* 2. Accept number from user and display below Pattern.
   Input : 5
   Output: 5 # 4 # 3 # 2 # 1 #    
*/

#include<stdio.h>

void Display(int iNo)
 {
     int iCnt=0;
     printf("The Patter you want to display is:\n");
     
     for(iCnt=iNo;iCnt>=1;iCnt--)
      {
         printf("%d\t#\t",iCnt);
      }
 }

int main()
 {  
    int iValue=0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return 0; 
 }
 
