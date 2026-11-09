#include <stdio.h>
int main() {
int a,q,r,s,amt,totalprice,change;
char e;
a:
printf("Welcome to the tea stall counter!\n Our menu:\n\n");
printf("Tea ------------------ Rs.10\naromatic Coffee------- Rs.20\nCold coffee------------ Rs.50\n\n");
printf("Choose by any number(1-4): ");
scanf("%d",&a);
if(a==1)
{
    printf("How many cups of refreshing tea? %d",q);
    scanf("%d",&q);
    totalprice=q*10;
    printf("Total for %d cup(s): Rs.%d\n",q,totalprice);
}
else if(a==2)
{
    printf("How many cups of  aromatic coffee? %d\n",r);
    scanf("%d",&r);
    totalprice=r*20;
    printf("Total for %d cup(s): Rs.%d\n",r,totalprice);
}
else if(a==3)
{
    printf("How many cups of refreshing chilled cold coffee? %d",s);
    scanf("%d",&s);
    totalprice=s*50;
    printf("Total for %d cup(s): Rs.%d\n",s,totalprice);
}
printf("Enter your payment amount: Rs.");
scanf("%d",&amt);
change=amt-totalprice;
printf("Change: %d\n",change);
printf("Explore or finalize? ");
scanf(" %c",&e);
if(e=='Y'||'y')
{
    goto a;
    printf("Certainly,let's explore: ");
    scanf("%d",&a);
}
else
{
    printf("Thank you for visiting! We look forward to serving you again soon!");
}
    return 0;
}
