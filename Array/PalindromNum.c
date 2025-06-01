#include <stdio.h>
int PalindromCheck(int number)
{
    int temp = 0;
    int PalNum = 0;
    while (number != 0)
    {
        temp = number % 10;
        PalNum = PalNum * 10 + temp;
        number /= 10;
    }
    if (number = PalNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int user_number;
    printf("Enter A Number:");
    scanf("%d",&user_number);
    if (PalindromCheck(user_number))
    {
        printf("The %d Number Is A Pallindrom Number.",user_number);
    }
    else
        printf("The %d Number Is Not A Pallindrom Number.",user_number);
    
    return 0;
}
