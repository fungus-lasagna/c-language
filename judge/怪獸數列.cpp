#include <stdio.h>

int main()
{
  int num;
  int a1, a2, a3, a4, a5;
  int one = 0, two = 0, three = 0, four = 0, five = 0;

  scanf("%d", &num);

  a1 = num / 10000;
  a2 = (num % 10000) / 1000;
  a3 = (num % 1000) / 100;
  a4 = (num % 100) / 10;
  a5 = num% 10;

  int numA[5] = {a1, a2, a3, a4, a5};
    
  for(int i = 0; i < 6; i++)
  {
    if (numA[i] == 1)
      one++;
    else if (numA[i] == 2)
      two++;
    else if (numA[i] == 3)
      three++;
    else if (numA[i] == 4)
      four++;
    else if (numA[i] == 5)
      five++;
  }

  int how_many_num[5] = {one, two, three, four, five};

  //how_many_num[a1-1]

  
  printf("%d%d\n", a1, how_many_num[a1-1]);
    
  printf("%d%d%d%d%d", one, two, three, four, five);

  return 0;
}