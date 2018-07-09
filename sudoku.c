#include <stdio.h>

int isAvailable(int puzzle[][9], int row, int col, int num)
{
    //finds the 3 by 3 region
    int rowStart = (row/3) * 3;
    int colStart = (col/3) * 3;
    int i;

    i = 0;
    while(i<9)
    {
        //checks if number after i is available horizontally.
        if (puzzle[row][i] == num) return 0;
        //checks if the number after i is available vertically.
        if (puzzle[i][col] == num) return 0;
        //checks if the number after i is available in the region.
        if (puzzle[rowStart + (i%3)][colStart + (i/3)] == num) return 0;
        ++i;
    }
    return 1;
}

int fillSudoku(int puzzle[][9], int row, int col)
{
    int i;
    if(row<9 && col<9)
    {
        //if a cell has a number in it
        if(puzzle[row][col] != 0)
        {
            if((col+1)<9) return fillSudoku(puzzle, row, col+1);
            else if((row+1)<9) return fillSudoku(puzzle, row+1, 0);
            else return 1;
        }
        else
        {
            i = 0;
            while(i<9)
            {
                if(isAvailable(puzzle, row, col, i+1))
                {
                    puzzle[row][col] = i+1;
                    if((col+1)<9)
                    {
                        if(fillSudoku(puzzle, row, col +1)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else if((row+1)<9)
                    {
                        if(fillSudoku(puzzle, row+1, 0)) return 1;
                        else puzzle[row][col] = 0;
                    }
                    else return 1;
                }
                ++i;
            }
        }
        return 0;
    }
    else return 1;
}

int main()
{
    int i, j;
    //builds initial array
    int puzzle[9][9]={{9, 0, 0, 0, 7, 0, 0, 0, 0},
                      {2, 0, 0, 0, 9, 0, 0, 5, 3},
                      {0, 6, 0, 0, 1, 2, 4, 0, 0},
                      {8, 4, 0, 0, 0, 1, 0, 9, 0},
                      {5, 0, 0, 0, 0, 0, 8, 0, 0},
                      {0, 3, 1, 0, 0, 4, 0, 0, 0},
                      {0, 0, 3, 7, 0, 0, 6, 8, 0},
                      {0, 9, 0, 0, 5, 0, 7, 4, 1},
                      {4, 7, 0, 0, 0, 0, 0, 0, 0}};

    if(fillSudoku(puzzle, 0, 0))
    {
        printf("\n+-----+-----+-----+\n");
        for(i=1; i<10; ++i)
        {
            for(j=1; j<10; ++j) printf("|%d", puzzle[i-1][j-1]);
            printf("|\n");
            if (i%3 == 0) printf("+-----+-----+-----+\n");
        }
    }
    else printf("\n\nNO SOLUTION\n\n");

    return 0;
}sud