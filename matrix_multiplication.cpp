#include <iostream>
using namespace std;
int main()
{
    int c1, r1, c2, r2;
    cout << "enter rows of first matirx \n";
    cin >> r1;
    cout << "enter cols of 1st matrix \n";
    cin >> c1;
    cout << "enter rows of 2nd matirx \n";
    cin >> r2;
    cout << "enter cols of 2nd matrix \n";
    cin >> c2;
    if (c1 == r2)
    {
        int m1[r1][c1], m2[r2][c2], res[r2][c1];
        cout << "enter frist matrix\n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> m1[i][j];
            }
        }
        cout << "enter 2nd matrix \n";
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cin >> m2[i][j];
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    res[i][j] += m1[i][k] * m2[j][k];
                }
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "matrix multiplication is not possible\n";
    }
    return 0;
}