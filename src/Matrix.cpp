#include "Matrix.h"
#include "Cell.h"
#include <vector>

Matrix::Matrix(int h, int w)
    : hight{h}, wight{w}
{
}

Matrix::~Matrix()
{
}

bool Matrix::create_matrix()
{
    for (int i = 0; i < hight; i++)
    {
        std::vector<Cell> temp_vector;
        for (int j = 0; j < wight; j++)
        {
            Cell temp_cell;
            temp_cell.set_cell_type("None");
            temp_vector.push_back(temp_cell);
        }
        grid.push_back(temp_vector);
    }
    return true;
};

bool Matrix::print_matrix() const
{
    std::cout << "The Current Grid has a Height of " << hight << " and a wight of " << wight << " with " << Cell::get_num_cells << " Cells."
              << "\n"
              << std::endl;
    for (int i = 0; i < hight; i++)
    {
        for (int j = 0; j < wight; j++)
        {
            grid[i][j].print_Cell();
        }
        std::cout << "\n";
    }
    return true;
};