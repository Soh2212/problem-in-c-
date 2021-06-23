#include <stdio.h>
#include <stdlib.h>

void check_error(int s)
{
    if (s < 0 || s > 25000)
    {
        printf("Error");
    }
}

int saves_currency(int a[], int n)
{
    int b[10];
    for (int i = 0; i <= 9; i++)
    {
        if (n >= a[i])
        {
            b[i] = (n / a[i]);
            n = (n % a[i]);
        }
        else{
            b[i]=0;
        }
    };
     for (int j = 0; j <=9; j++)
     {
        printf("%d\t", b[j]);
    }
}

int main(int argc, char const *argv[])
{
    int i, saves, currency_arr[10] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("\nEnter your saves: ");
    scanf("%d", &saves);
    check_error(saves);
    saves_currency(currency_arr, saves);
    return 0;
}
