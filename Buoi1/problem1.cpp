#include <iostream>
using namespace std;
#define MAX 100
void sumTarget(int arr[MAX], int size, int target)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << i << "\t" << j << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {3, 2, 1, 5, 4, 6, 8};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    sumTarget(arr, size, 9);

    return 0;
}