#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 46, 3, 5, 2, 6};
    int sz = 7;
    int target = 6;

    cout << linearSearch(arr, sz, target) << endl;

    return 0;
}