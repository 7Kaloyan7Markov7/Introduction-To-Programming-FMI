void spiralPrint(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
    int leftBorder = 0, rightBorder = cols - 1;
    int upperBorder = 0, lowerBorder = rows - 1;

    while (leftBorder <= rightBorder && upperBorder <= lowerBorder)
    {
        for (int i = leftBorder; i <= rightBorder; ++i)
        {
            std::cout << matrix[upperBorder][i] << " ";
        }
        upperBorder++;

        for (int i = upperBorder; i <= lowerBorder; ++i)
        {
            std::cout << matrix[i][rightBorder] << " ";
        }
        rightBorder--;

        if (upperBorder <= lowerBorder)
        {
            for (int i = rightBorder; i >= leftBorder; --i)
            {
                std::cout << matrix[lowerBorder][i] << " ";
            }
            lowerBorder--;
        }

        if (leftBorder <= rightBorder)
        {
            for (int i = lowerBorder; i >= upperBorder; --i)
            {
                std::cout << matrix[i][leftBorder] << " ";
            }
            leftBorder++;
        }
    }
}
