stdio.h>
int main()
{
    int a;
    printf("Enter a positive number:");
    scanf("%d" ,&a);

    if (a % 5  == 0)
    {
        printf("the entered number is divisible by 5");

    }
    else
    {
        printf("the enterd number is not divisible by 5");
    }

return 0;
}