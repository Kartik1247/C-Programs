#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char d;
  printf("Enter a,b or c to know the teacher's name of the subject FCP, Tech. English or Mechanical Engg. respectively:-\n");
  scanf("%c",&d);
  
  if (d=='a')
  {
    printf("Your FCP teacher is Mrs. Kavita Chourasia Mam\n");
    }
    else if (d=='b')
      {
      printf("Your Tech. English teacher is Dr. Shashi Yadav Mam\n");
      }
        else if (d=='c')
         {
          printf("Your Mechanical Engg. teacher is Dr.Vidya Mehra Mam\n");
        }
        else
{
  printf("You have entered a wrong choice.");
}
    return 0;
  } 