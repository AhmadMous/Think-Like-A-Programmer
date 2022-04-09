#include <iostream>
using namespace std;

int main()
{
    // Variable to hold user input
    int x;
    cout << "Enter the number of levels of each triangle: ";
    cin >> x;


    // Values of these variables decide whether a hash/space will be printed or not
    int conditional_space, conditional_hash;

    // Split printing into 2 passes for readability, one per triangle
    for (int pass = 0; pass < 2; pass++)
    {
        // Iterate over rows equal to user's input
        for(int row = 1; row <= x; row++)
        {
            // Each pass has different values to compare against
            if (pass == 0)
            {
                conditional_space = x - row;
                conditional_hash = 2 * row;
            }
            else
            {
                conditional_space = row - 1;
                conditional_hash = 2 * x + 2 - 2 * row;
            }

            // Print the appropriate number of spaces for the row
            for(int space = 1; space <= conditional_space; space++)
            {
                cout << ' ';
            }

            // Print the appropriate number of hashes for the row
            for (int hashNum = 1; hashNum <= conditional_hash; hashNum++)
            {
                cout << '#';
            }
            cout << '\n';
        }
    }
    return 0;
}