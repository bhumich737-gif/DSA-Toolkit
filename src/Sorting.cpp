#include <algorithm>
#include "sorting.h"
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right)
{
    vector<int> temp;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    while (i <= mid)
        temp.push_back(arr[i++]);

    while (j <= right)
        temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); k++)
        arr[left + k] = temp[k];
}

void divide(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    divide(arr, left, mid);
    divide(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

void mergeSort(vector<int>& arr)
{
    if (!arr.empty())
        divide(arr, 0, static_cast<int>(arr.size()) - 1);
}


int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSortHelper(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quickSortHelper(arr, low, p - 1);
        quickSortHelper(arr, p + 1, high);
    }
}

void quickSort(vector<int>& arr)
{
    if (!arr.empty())
        quickSortHelper(arr, 0, static_cast<int>(arr.size()) - 1);
}
