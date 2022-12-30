#include<stdio.h>
#include<string.h>
// enum Sex{
//       MALE,
//       FEMALE
// };
int main()
{
      // enum Sex s = MALE;
      // printf("%d\n",MALE);
      // printf("%d\n",FEMALE);
      // return 0;
      char arr1[] = "abc";
      char arr2[] = {'a','b','c','\0'};
      // printf("%s\n",arr1);
      // printf("%s\n",arr2);
     
      printf("%d\n",strlen(arr1));
      printf("%d\n",strlen(arr2));
      return 0;
}
