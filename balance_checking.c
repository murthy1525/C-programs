#include<stdio.h>
int main()
{
    float amt,blnc,d,w;
    char c;
    printf("Minimum balance: ");
    scanf("%f",&amt);
    if(amt<2000)
    {
        printf("Amount can't be stored\n");
        printf("Please enter minimum balance - 2000\n");
    }
    else if(amt>=2000)
    {
        printf("you want to deposit or withdrawl: %c");
        scanf(" %c",&c);
        switch(c)
        {
            case 'd':
            case 'D':
            printf("How much money you want to deposit: ");
            scanf("%f",&d);
            if(d<=0)
            {
                printf("Invalid amlount");
            }
            else
            {
                blnc=d+amt;
                printf("balance= %f",blnc);
            }
            break;
            case 'w':
            case 'W':
            printf("How much money you want to withdrawl: ");
            scanf("%f",&w);
            if(w<=0||w>amt)
            {
                printf("Invalid amount");
            }
            else
            {
                blnc=amt-w;
                printf("balance= %f",blnc);
                break;
            }
        }
    }
}
