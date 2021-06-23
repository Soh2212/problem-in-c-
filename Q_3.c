#include <stdio.h>
#include <stdlib.h>

void count_egg(int ca[])
{
  int e1 = 0, e2 = 0, e3 = 0, e4 = 0, e5 = 0;
  for (int i = 1; i <= ca[0]; i++)
  {
    if (ca[i] >= 52)
    {
      e1 += 16;
    }
    else if (ca[i] == 51)
    {
      e2 += 12;
    }
    else if (ca[i] == 50)
    {
      e3 += 8;
    }
    else if (ca[i] == 49)
    {
      e4 += 4;
    }
  };
  e5 = e1 + e2 + e3 + e4;
  printf("\nOUTPUT :%d", e5);
}

void check_error(int a[])
{
  if (a[0] < 0)
  {
    printf("\n Error");
    exit(0);
  }
  for (int i = 1; i < a[0]; i++)
  {
    if (a[i] == 0)
    {
      printf("\n Error");
      exit(0);
    }
  };
}
int main()
{
  printf("INPUT :");
  int i = 0;
  int arr[10000];
  char temp;
  do
  {
    scanf("%d%c", &arr[i], &temp);
    i++;
  } while (temp != '\n');
  check_error(arr);
  count_egg(arr);
  return 0;
}
