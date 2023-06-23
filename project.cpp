#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int binarySearch(int arr[], int p, int r, int num)
{
    if (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        if (arr[mid] > num)
            return binarySearch(arr, p, mid - 1, num);
        if (arr[mid] < num)
            return binarySearch(arr, mid + 1, r, num);
    }
    return -1;
}

int knapSack(int v[], int w[], int n, int W)
{
    if (W < 0)
        return INT_MIN;
    if (n < 0 || W == 0)
        return 0;
    int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
    int ex = knapSack(v, w, n - 1, W);
    return max(in, ex);
}

void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int var = arr[i]; // Taken first element as sorted
        for (j = i - 1; j >= 0; j--)
        {
            // Making comparisons
            if (arr[j] > var)
            {
                // Shifting elements
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = var;
    }

    cout << "Array after sorting:" << endl;

    for (int i = 0; i <= n - 1; i++)
    {
        // Printing the array after being sorted
        cout << arr[i] << " ";
    }
}

int main()
{

    cout << "--=Enter To menue & choice=--" << endl;
    cout << "-------------------Search-------------------" << endl;
    cout << "===========================================" << endl;
    cout << "01. -=Binary Search=-" << endl;
    cout << "02. -=insertion sort=-" << endl;
    cout << "03. -= Kruskal Algorithom=-" << endl;
    cout << "04. -=Bouble sort=-" << endl;
    cout << "05. -= Search=-" << endl;
    cout << "06. Counting sort" << endl;
    cout << "07. Radix sort" << endl;
    cout << "8. Euclidean GCD Algorithm" << endl;
    cout << "9. Universal Hashing" << endl;
    cout << "10. Stack" << endl;
    cout << "===========================================" << endl;

    cout << "-------------------------- Algorithms --------------------------" << endl;

    cout << " 01. Largest Common Subsequence" << endl;
    cout << "02. Optimal Binary Search tree" << endl;
    cout << " 03. Matrix Chain Multiplication" << endl;
    cout << " 04. Strassen's Matrix Multiplication Algorithm" << endl;
    cout << " 05. BFS" << endl;
    cout << " 06. DFS" << endl;
    cout << " 07. DAG" << endl;
    cout << "08. Longest Increasing Subsequence" << endl;
    cout << "09. Topological sort" << endl;
    cout << " 10. Krushkal's algorithm" << endl;
    cout << " 11. Prim's algorithm" << endl;
    cout << "12. Dijkastra's algorithm" << endl;
    cout << " 13. Bellman Ford's algorithm" << endl;
    cout << " 14. Worshall's algorithm" << endl;
    cout << "15. (0,1) KKnapsack problem" << endl;
    cout << "16. Naive string matching algorithm" << endl;
    cout << "17. Rabin krap string matching algorithm" << endl;
    cout << "18. Activity selection problem" << endl;
    cout << "19. MST algorithm" << endl;
    cout << "20. Max flow min cut" << endl;
    cout << "21. Hamiltonion curve-circul" << endl;

    cout << "===========================================" << endl;
    int choice;
    int arr[10] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    int mid, num, p, index, n, size, w;

    // int v[] = {10, 20, 30, 40, 60, 70};
    // int w[] = {1, 2, 3, 6, 7, 4};
    // int W = 7;

    printf("Enter Your Choice: ");
    cin >> choice;
    switch (choice)
    {
    case 1:
        n = sizeof(arr) / sizeof(arr[0]);
        cout << "Enter the number to search: \n";
        cin >> num;
        index = binarySearch(arr, 0, n - 1, num);
        if (index == -1)
        {
            cout << num << " is not present in the array";
        }
        else
        {
            cout << num << " is present at index " << index << " in the array";
        }
        break;

    case 2:
        cout << "Enter Size: ";
        cin >> size;
        insertionSort(arr, size);
        break;

    case 3:

        break;
    case 4:
        break;

    case 5:

    case 6:

        break;
    case 7:
        break;

    case 8:
    case 9:

        break;
    case 10:
        break;

    case 11:
        break;
    case 12:

        break;
    case 13:
        break;

    case 14:

        break;
    case 15:

       
        // n = sizeof(v) / sizeof(v[0]);
        // cout << "Knapsack value is " << knapSack(v, w, n - 1, W);
        // break;

    case 16:
        break;

    case 17:
        break;
    case 18:

        break;
    case 19:
        break;

    case 20:

        break;

    default:
        break;
    }
}