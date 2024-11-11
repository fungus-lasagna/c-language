#include <stdio.h>

int main()
{
  int num;
  int a1, a2, a3, a4, a5;
  int one = 0, two = 0, three = 0, four = 0, five = 0;

  scanf("%d", &num);

  //將輸入的數字傳進數列numA 
  a1 = num / 10000;
  a2 = (num % 10000) / 1000;
  a3 = (num % 1000) / 100;
  a4 = (num % 100) / 10;
  a5 = num% 10;

  int numA[5] = {a1, a2, a3, a4, a5};
  
  //計算有多少1, 2, 3, 4, 5
  for(int i = 0; i < 5; i++)
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
    
  //printf("%d%d%d%d%d\n", one, two, three, four, five);
  
  //將重複的數字改為零
  for (int i = 0; i < 5; i++)
  {
      for (int j = i + 1; j < 5; j++)
      {
          if (numA[i] == numA[j])
            numA[j] = 0;
      }
  }
  
  //輸出
  for (int i = 0; i < 5; i++)
  {
      if (numA[i] != 0)
        printf("%d%d", how_many_num[(numA[i] - 1)], numA[i]);
  }
  
  

  return 0;
}