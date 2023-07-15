#include <stdio.h>
#include <stdbool.h>

bool isValidUnit(int unit[]) 
{
    bool digits[10] = { false };
    
    for (int i = 0; i < 9; i++) 
    {
        int digit = unit[i];
        if (digit < 1 || digit > 9 || digits[digit])
        {
            return false;
        }
        digits[digit] = true;
    }
    
    return true;
}

bool isValidSudoku(int grid[9][9]) 
{
    for (int row = 0; row < 9; row++) 
    {
        if (!isValidUnit(grid[row]))
         {
            return false;
        }
    }

    for (int col = 0; col < 9; col++) 
    {
        int column[9];
        for (int row = 0; row < 9; row++)
         {
            column[row] = grid[row][col];
        }
        if (!isValidUnit(column))
         {
            return false;
        }
    }

    for (int rowStart = 0; rowStart < 9; rowStart += 3)
     {
        for (int colStart = 0; colStart < 9; colStart += 3) 
        {
            int subgrid[9];
            int index = 0;
            for (int row = rowStart; row < rowStart + 3; row++) 
            {
                for (int col = colStart; col < colStart + 3; col++) 
                {
                    subgrid[index++] = grid[row][col];
                }
            }
            if (!isValidUnit(subgrid)) 
            {
                return false;
            }
        }
    }

    return true;
}

int main() 
{
    int grid[9][9] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    if (isValidSudoku(grid))
     {
        printf("The Sudoku solution is correct.\n");
    } else 
    {
        printf("The Sudoku solution is incorrect.\n");
    }

    return 0;
}