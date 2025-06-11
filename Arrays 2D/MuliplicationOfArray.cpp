#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter the no. of rows: ";
    cin >> a;
    cout << "Enter the no. of cols: ";
    cin >> b;
    cout << endl;
    cout << "Enter the no. of rows: ";
    cin >> c;
    cout << "Enter the no. of cols: ";
    cin >> d;
    cout << endl;

    cout << "Enter Elements for 1st Matrix" << endl;
    int arr_1[a][b], arr_2[c][d], arr_3[a][d];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr_1[i][j];
        }
    }
    cout << endl;
    cout << "Enter Elements for 2nd Matrix" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> arr_2[i][j];
        }
    }
    cout << endl;

    cout << "Elements for 1st Matrix" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr_1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Elements for 2nd Matrix" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cout << arr_2[i][j] << " ";
        }
        cout << endl;
    }
    if (b == c)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                arr_3[i][j] = 0;
                for (int k = 0; k < b; k++)
                {
                    // a[i][0], a[i][1]... * b[0][j], b[1][j]...
                    // a[i][0]*b[0][j] and so on...
                    arr_3[i][j] = arr_3[i][j] + (arr_1[i][k] * arr_2[k][j]);
                }
            }
        }
        cout << "Multiplication for 1st Matrix and 2nd Mtarix is: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                cout << arr_3[i][j] << " ";

            }
            cout << endl;
        }
    }

    else
    {
        cout << "The two matrices cannot be multiplied...";
    }
}