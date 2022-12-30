#include<stdio.h>
enum Sex{
      MALE,
      FEMALE
};
int main()
{
      enum Sex s = MALE;
      printf("%d\n",MALE);
      printf("%d\n",FEMALE);
      return 0;
}
