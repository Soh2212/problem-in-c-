#include <stdio.h>
#include <stdlib.h>

int day_expanses(float a_day[5])
{
    float p = 0;
    for (int i = 0; i < 5; i++)
    {
        p += a_day[i];
    };
    printf("\nToday total expanses : %f", p);
}

void check_error(float a[5], int month)
{
    float n;
    int m;
    for (int i = 1; i < 5; i++)
    {
        if (a[i - 1] >= a[i])
        {
            a[i] = a[i - 1];
        }
    };
    m = a[4];
    if (m != a[1] || month < 0 || month > 12)
    {
        printf("\n Error");
        exit(0);
    }
}

void month_expanses(float m_day[5], int m, int y)
{
    float p = 0;
    for (int i = 0; i < 5; i++)
    {
        p += m_day[i];
    };
    float value;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        value = (p * 31);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        value = p * 30;
        break;
    case 2:
        if (y % 100 == 0 && y % 400 == 0)
        {
            value = p * 29;
        }
        else if (y % 4 == 0 && y % 100 != 0)
        {
            value = p * 29;
        }
        else
        {
            value = p * 28;
        }
    }
    printf("\nThis month expanses :%f", value);
}

int main()
{
    int month, year;
    float arr1[5];
    float arr[5];
    printf("\nEnter the month index: ");
    scanf("%d", &month);
    printf("\nEnter the year: ");
    scanf("%d", &year);
    printf("\nDaily Minlk Expanses: ");
    scanf("%f", &arr[0]);
    printf("\nDaily Non-veg Expanses: ");
    scanf("%f", &arr[1]);
    printf("\nDaily Fruits Expanses: ");
    scanf("%f", &arr[2]);
    printf("\nDaily Grocery Expanses: ");
    scanf("%f", &arr[3]);
    printf("\nDaily Vegetables Expanses: ");
    scanf("%f", &arr[4]);
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = arr[i];
    };
    check_error(arr, month);
    day_expanses(arr1);
    month_expanses(arr1, month, year);

    return 0;
}
