#include <stdio.h>

int main() {
   
    int i,j,count = 0,length = 0;
    char a[50], temp[50];
    
    printf("Enter any string: ");
    scanf("%s",&a);
    
    for(i = 0; a[i] != '\0'; i++)
    {
        length = length + 1;
    }
     
    for (i = 0; a[i] != '\0'; i++) {
       count = 0;
       
       for(j = length - 1; j >= 0; j--)
       {
           if(a[i] == a[j])
           {
               count = count + 1;
           }
       }
       
       printf("%c => %d",a[i], count);
       printf("\n");
    }
   
    return 0;
}
