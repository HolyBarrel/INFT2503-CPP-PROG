#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <functional>

using namespace std;

template<typename T>
class Matrix 
{
    public: 
    
        Matrix(vector<vector<T>> matrix)
        {
            this->matrix = matrix;
            rows = matrix.size();
            cols = matrix[0].size();
        }
        

        friend ostream& operator<<(ostream& out, const Matrix<T>& matrix)
        {
            for(size_t i = 0; i < matrix.rows; i++)
            {
                out << "[";
                for(size_t j = 0; j < matrix.cols; j++)
                {
                    if(j == matrix.cols - 1)
                    {
                        out << matrix.matrix[i][j];
                    }
                    else
                    {
                        out << matrix.matrix[i][j] << " ";
                    }
                }

                out << "]" <<endl;
            }

            return out;
        }

        Matrix<T> operator*(const Matrix<T>& other)
        {

            size_t rows_other = other.rows;
            size_t colunms_other = other.cols;

            if(cols != rows_other)
            {
                throw invalid_argument("The number of columns in the first matrix must be equal to the number of rows in the second matrix.");
            }

            vector<vector<T>> result(rows, vector<T>(colunms_other));

            vector<thread> threads;
            threads.reserve(rows);

            for(size_t i = 0; i < rows; i++ ) 
            {
                threads.emplace_back([i, &other, &result, this]{
                    for(size_t j = 0; j < other.cols; j++ ) 
                    {
                        for(size_t k = 0; k < other.rows; k++ ) 
                        {
                            result[i][j] += matrix[i][k] * other.matrix[k][j];
                        }
                    }
                });
            }
            for(auto& thread : threads ) 
            {
                thread.join();
            }

            return Matrix<T>(result);
        }



    private: 

        size_t rows;
        size_t cols;
        vector<vector<T>> matrix;
};

#endif // MATRIX_H