// check the even and odd in array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Even : = " ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "  "<< arr[i];
        }
    }
        cout<<endl;
      cout<<"odd :";
      for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << "  "<<arr[i];
        }
    }
    return 0;
}