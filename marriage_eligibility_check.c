#include <stdio.h>
int main() 
{
 char a;
 char g;
 int m,f;
 printf("Citizen: ");
 scanf(" %c",&a);
 if(a=='i'|| a=='I')
 {
     printf("Enter your gender: ");
     scanf(" %c",&g);
     
     if(g=='M'|| g=='m')
        {
         printf("Enter boy age: ");
         scanf("%d",&m);
     if(m>=21&&m<=50)
    {
       printf("Congratulations! you are eligible for marriage\n");
    }
     else
    {
     printf("Sorry! you are not eligible\n");
    }   
     }
     else  
     {
         printf("Enter girl age: ");
        scanf("%d",&f);
         if(f>=18&&f<=45)
            {
              printf("Congratulations! you are eligible for marriage\n");
             }
 else
 {
     printf("Sorry! you are not eligible");
 }
     }  
 }
 else
 {
     printf("This is only for indians\n");
 }
 return 0;
}
