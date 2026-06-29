#include <iostream>
using namespace std;

int main()
{
    //2D Arrays
    int arr[3][5];
    cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[0][3] >> arr[0][4];
    cin >> arr[1][0] >> arr[1][1] >> arr[1][2] >> arr[1][3] >> arr[1][4];
    cin >> arr[2][0] >> arr[2][1] >> arr[2][2] >> arr[2][3] >> arr[2][4];
    cout << "The elements in the 2D array are : \n";
    cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << " " << arr[0][3] << " " << arr[0][4] << "\n";
    cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << " " << arr[1][3] << " " << arr[1][4] << "\n";
    cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << " " << arr[2][3] << " " << arr[2][4] << "\n";
    // The 2D array is denoted as arr[i][j].
    // i : Row index, j : Column index.
    // We can visualize the 2D array as a table with rows and columns. In this case, we have 3 rows and 5 columns.
    // But in reality, the 2D array is stored in a contiguous block of memory. The elements are stored in row-major order, which means that the elements of the first row are stored first, followed by the elements of the second row, and so on.
    // In this case, it is stored (the blocks are) as arr[0][0], arr[0][1], arr[0][2], arr[0][3], arr[0][4], arr[1][0], arr[1][1], arr[1][2], arr[1][3], arr[1][4], arr[2][0], arr[2][1], arr[2][2], arr[2][3], arr[2][4].
    
    //This is the End of the program.
    //And this "End" is the signature step of me(Harish) in all the programs.
    cout << "\n" << "End!" << "\n";
    return 0;
}