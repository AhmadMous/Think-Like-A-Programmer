#include <iostream>
using namespace std;

int main(void)
{
    // Grab the number of rows from the user
    int x;
    cout << "Enter the number of rows" << endl;
    cin >> x;

    // Loop for the number of rows
    for(int i = 1; i <= x; i++)
    {
        // Loop for the number of columns
        for(int j = 1; j <= 2 * x; j++)
        {
            // Left (resp. right) statement is for spaces on the left(resp. right)
            if(j < i || j + i >= 2 * (x + 1))
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }
        }

        // End the line
        cout << endl;
    }
}