#include <stdio.h>

int main() {
    int age,amt;
    float height,tot;
    char vip_pass;
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter height: ");
    scanf("%f",&height);
    printf("Enter VIP or not: ");
    scanf(" %c",&vip_pass);
    if(age<3)
    {
        printf("Free\n");
    }
        else if(age>3&&age<=12)
        {
        amt=20;
        }
        else if(age>=13&&age<=64)
        {
        amt=100;
        }
        else
        {
            amt=50;
        }
       if(height>180)
       {
           tot=amt+50;
       }
       else if(height>=120&&height<=180)
       {
           tot=amt;
       }
       else
       {
           tot=amt/0.5;
       }
       if(vip_pass=='y')
       {
           tot-=tot*10/100;
       }
       printf("----------------\n");
       printf("age: %d\nheight:%f\nVIP pass:%c\nbase price:%d\nFinal price:%f",age,height,vip_pass,amt,tot);
    return 0;
    }
