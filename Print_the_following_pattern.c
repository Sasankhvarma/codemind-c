#include <stdio.h>
int main() 
 {
  int rows, i, j;
  scanf("%d", &rows);
 
  for(i=1; i<=rows; i++)
  {
    for(j=i; j<=rows; j++) 
    {
      printf("%d ", j);
    }
    printf("
");
  }
}