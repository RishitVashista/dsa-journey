 #include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];        // ✅ runtime पर size तय, standard C++

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool sorted = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if (sorted) cout << "Sorted" << endl;
    else        cout << "Not Sorted" << endl;

    delete[] arr;                  
    return 0;
}