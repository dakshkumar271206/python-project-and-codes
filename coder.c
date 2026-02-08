# include <stdio.h>
# include <conio.h>
int main()
{
    int p = 10000, r = 5, t = 3, comint, amt = p;
    for (int i = 1; i <= t; i++)
    {
        amt = amt + (amt * r / 100.0);
    }
    comint = amt - p;
    printf("The compound interest is %d", comint);
    return 0;
}
