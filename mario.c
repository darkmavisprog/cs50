#include <stdio.h>
#include <cs50.h>

int main(void) {
    
   int height = 0;
   
   do {
       printf("height: ");
       height = GetInt();
       
       if(height == 0)
       {
           return 0;
       }
   } 
   while (height < 0 || height > 23);    
   
       for(int rows = 1; rows < height; rows++) {
       
           for(int col = 1; col < height - rows; col++) {
               printf(" ");
           }
           
           for(int col2 = 1; col2 < rows; col2++) {
               printf("#");
           }
           
           printf("\n");
   }
   return 0;
}
