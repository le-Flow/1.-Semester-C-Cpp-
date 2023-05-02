#include <stdio.h>
typedef enum{false, true} bool;

/*bool trans_matrix(int matrix[4][4])
{
     int trans_matrix [4][4] = {
            {matrix[0][0], matrix[1][0], matrix[2][0], matrix[3][0]},
            {matrix[0][1], matrix[1][1], matrix[2][1], matrix[3][1]},
            {matrix[0][2], matrix[1][2], matrix[2][2],  matrix[3][2]},
            {matrix[0][3], matrix[1][3], matrix[2][3], matrix[3][3]}};

    int row, column=0;

    for (row=0; row<4; row++)
    {
        for(column=0; column<4; column++)
        {printf("%d     ", trans_matrix[row][column]);}
        printf("\n");
    }

    if(matrix[4][4] == trans_matrix[4][4])
    {
        return true;
    }
    return false;
}*/

bool sym_matrix(int matrix[4][4])
{
    for(int x = 0; x < 4; x++){
        for(int y = 0; y < 4; y++){
            if(matrix[x][y] != matrix[y][x]){
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    int matrix[4][4] = {
            {8, 2, 9, 31},
            {2, 0, 20, 7},
            {9, 20, 5, 11},
            {31, 7, 11, 35}};

    if (sym_matrix(matrix))
    {
        printf("die Matrix ist Symmetrisch");
    }
    else
    {
        printf("die Matrix ist nicht Symmetrisch");
    }
}