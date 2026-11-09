#include <stdio.h>
int main() {
    char a[20],c[20];
    printf("Name of the owner ");
    scanf("%s",a);
    printf("Name of the bike ");
    scanf("%s",c);
    int age,b,ty,op,amt;
    printf("Enter your vehicle wheels: ");
    scanf("%d",&b);
    if(b>=2&&b<=4)
    {
        printf("What is the age of the vehicle: ");
        scanf("%d",&age);
        if(age>8)
        {
        printf("Enter 1 for tyre problem\nEnter 2 for fuel problem\nEnter 3 for engine issue\nEnter 4 for general services %d\n",op);
        scanf("%d",&op);
            if(op==1)
            {
            printf("issue: tyres\n");
            printf("how many tyres you have the issue");
            scanf("%d",&ty);
            amt=ty*400;
            printf("bill: %d",amt);
            }
         else if(op==2)
            {
                printf("issue: fuel\n");
                printf("bill: %d ",1500);
            }
          else  if(op==3)
            {
                printf("issue: engine\n");
                printf("bill: %d ",5000);
            }
          else  if(op==4)
            {
                printf("issue: general service\n");
                printf("bill: %d",1000);
            }
            else
            {
            printf("choose correct option");
            }
    }else{
        printf("your vehicle servie will done after a while");
    }
    }else
        {
        printf("This service center is not accepting other than 2 wheeler,3 wheeler and 4 wheeler");
        }
        return 0;
    }
