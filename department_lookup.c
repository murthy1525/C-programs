#include<stdio.h>
int main()
{
    int id;
    printf("Enter your Id number: ");
    scanf("%d",&id);
    switch(id)
    {
    case 11 ... 15:
        printf("Software department");
        break;
        case 16 ... 20:
        printf("Development department");
        break;
        case 21 ... 23:
        printf("Management department");
        break;
        default:
        printf("Enter perfect department");
        break;
    }
    return 0;
}
