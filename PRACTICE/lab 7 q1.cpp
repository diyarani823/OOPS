#include <iostream>
using namespace std;

class Array2D {
private:
    int rows, cols;
    int** data;
    void freeMemory() {
        if (data != NULL) {
            for (int i = 0; i < rows; i++)
                delete[] data[i];
            delete[] data;
        }
    }

public:
    Array2D() {
        rows = cols = 0;
        data = NULL;
    }
    Array2D(int r, int c) {
        rows = r;
        cols = c;

        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                data[i][j] = 0;
        }
    }
    Array2D(const Array2D& other) {
        rows = other.rows;
        cols = other.cols;

        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; j++)
                data[i][j] = other.data[i][j];
        }
    }
    Array2D& operator=(const Array2D& other) {
        if (this != &other) {

            freeMemory(); 

            rows = other.rows;
            cols = other.cols;

            data = new int*[rows];
            for (int i = 0; i < rows; i++) {
                data[i] = new int[cols];
                for (int j = 0; j < cols; j++)
                    data[i][j] = other.data[i][j];
            }
        }
        return *this;
    }
    int* operator[](int i) {
        if (i < 0 || i >= rows) {
            cout << "Index out of bounds!\n";
            exit(1);
        }
        return data[i];
    }
    Array2D operator+(const Array2D& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Addition not possible (dimension mismatch)\n";
            exit(1);
        }

        Array2D result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] + other.data[i][j];

        return result;
    }
    Array2D operator-(const Array2D& other) {
        if (rows != other.rows || cols != other.cols) {
            cout << "Subtraction not possible (dimension mismatch)\n";
            exit(1);
        }

        Array2D result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[i][j] = data[i][j] - other.data[i][j];

        return result;
    }
    Array2D operator*(const Array2D& other) {
        if (cols != other.rows) {
            cout << "Multiplication not possible (invalid dimensions)\n";
            exit(1);
        }

        Array2D result(rows, other.cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
    ~Array2D() {
        freeMemory();
    }
};
int main() {

    Array2D A(2,2), B(2,2);

    cout << "Enter elements of A:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter elements of B:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    cout << "\nMatrix A:\n";
    A.display();

    cout << "\nMatrix B:\n";
    B.display();

    Array2D C = A + B;
    cout << "\nA + B:\n";
    C.display();

    Array2D D = A - B;
    cout << "\nA - B:\n";
    D.display();

    Array2D E = A * B;
    cout << "\nA * B:\n";
    E.display();
    Array2D F = A;
    cout << "\nCopy of A:\n";
    F.display();

    return 0;
}
