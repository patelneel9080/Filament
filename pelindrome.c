#include <stdio.h>

int main() {
    
    int i,j,temp = 0,pelindrome = 0;
    char a[50], b[50];
    
    printf("Enter any string: ");
    scanf("%s",&a);
    
    for(i = 0; a[i] != '\0'; i++)
    {
        temp = temp + 1;
    }
    
    
    for (i = 0; i < temp; i++) {
        b[i] = a[temp - i - 1];
    }
   

    printf("%s\n",b);
    
    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] != b[i])
        {
            pelindrome = 1;
        }
    }
    
    if(pelindrome == 1)
    {
        printf("The given string is not Pelindrome");
    }
    else
    {
         printf("The given string is Pelindrome");
    }

    return 0;
}
