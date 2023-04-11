#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//14-magic box
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
 GetStdHandle( STD_OUTPUT_HANDLE ),
    coord);
  }
int main()
{
    int size,totalSize,col,row;
    printf("Enter your size of square:");
    scanf("%d",&size);
    int arr[size][size];
     totalSize =size * size;
        for(int i=1;i<=totalSize;i++)
          {
                if(i==1)
                {
                  row =1;
                  col=(size+1)/2;
                }
                else if(((i-1) % size) == 0)
                {
                  row++;
                  }
                else
                    {
                  row--; col--;
                    }
                  if(row == 0)
                   row = size;
                  if(col == 0)
                   col = size;

                gotoxy(col*3,row);
           printf("%d",i);

          }

return 0;
}
