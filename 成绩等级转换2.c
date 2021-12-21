#include<stdio.h>
#include <stdlib.h>

int main()
{
    int （grade）;
    printf("请输入学生成绩\n");
    scanf("%d", &grade);
    system("cls");
    switch(grade/10)
  {
      case 10:
          printf("A\n");
          break;
      case 9:
          printf("B\n");
          break;
      case 8:
          printf("C\n");
          break;
      case 7:
          printf("D\n");
          break;
      case 6:
          printf("E\n");
          break;
      default:
  	      printf("输入的成绩有误");
          break;
          }
	return 0;
}
