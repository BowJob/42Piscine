#include <unistd.h>
#include <stdio.h>

int solve(int grid[][9], int row, int col);

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

//returns 0 if not available, 1 if available.
int availability(int grid[][9], int row, int col, int num)
{
  int gridrowini;
  int gridcolini;
  int i;

  //finds the top left corner of the region a cell belongs in.
  gridrowini = (row/3) * 3;
  gridcolini = (col/3) * 3;
  i = 0;
  while (i < 9)
  {
    //check if the number exists in the row
    if (num == grid[row][i])
      return (0);
    //check if the number exists in the column
    if (num == grid[i][col])
      return (0);
    //check if the number exists
    if (num == grid[gridrowini + (i%3)][gridcolini + (i/3)])
      return (0);
    i++;
  }
  return (1);
}

int   solvezero(int grid[][9], int row, int col, int i)
{
  while(i < 9)
      {
        if (availability(grid, row, col, i + 1))
        {
          grid[row][col] = i + 1;
          if((col + 1) < 9)
          {
            if (solve(grid, row, col + 1))
              return (1);
            else
              grid[row][col] = 0;
          }
          else if((row + 1) < 9)
          {
            if (solve(grid, row + 1, 0))
              return (1);
            else
              grid[row][col] = 0;
          }
          else
            return (1);
        }
        i++;
      }
  return (0);
}

//returns 0 if it fails to complete til the end, returns 1 if successful.
int   solve(int grid[][9], int row, int col)
{
  int i;
  //check if the position is at the end yet
  if(row < 9 && col < 9)
  {
    //check if a cell has a number in it. 0 means empty.
    if(grid[row][col] != 0)
    {
      //since cell is not 0, we can't write. let's look for a 0.
      //check if we can write to the right
      if((col + 1) < 9)
        return (solve(grid, row, col + 1));
      else if ((row + 1) < 9) //check if we can write down
        return (solve(grid, row + 1, 0));
      else
        return (1); //we reached the end.
    }
    else
    {
      //looks like we got a zero, let's fill it with something that follows the rules.
      i = 0;
      if (solvezero(grid, row, col, i) == 1)
        return (1);
      else
        return (0);
    }
    return (0);
  }

  // TODO:
  else return (1); //solver is able to reach the end, return 1
}
