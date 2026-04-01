#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Enforce dimensions not exceeding 3
    while (true) {
        cout << "Enter dimensions for the 2D array (rows and columns, max 3): ";
        cin >> rows >> cols;

        if (rows > 0 && rows <= 3 && cols > 0 && cols <= 3) {
            break;
        }
        cout << "Invalid input. Dimensions must be between 1 and 3." << endl;
    }

    // Dynamically allocate 2D array
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    // Assign values using nested loops
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array2D[i][j];
        }
    }

    // Output values
    cout << "\n--- 2D Array Content ---" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array2D[i][j] << " ";
        }
        cout << endl;
    }

    // Clean up memory
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}
