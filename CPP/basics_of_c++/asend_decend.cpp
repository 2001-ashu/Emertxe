#include <iostream>
using namespace std;
class asend
{
public:
    void get_data(int *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void read_data(int *arr, int size)
    {
        cout << "Asending order of an Array:";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
class desend
{
public:
    void get(int *arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    void display(int *arr, int size)
    {
        cout << "Desending order of array is: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i]<<" ";
        }
    }
};
int main()
{
    class asend A;
    class desend D;
    int size;
    char c='Y';
    cout << "Enter Size:";
    cin >> size;
    int arr[size];
    cout << "Enter arrry Elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    int ch;
    cout << "Operations\n";
    while (c=='Y')
    {

        cout << "1.Asending Operation\n2.Decending Operation\nChoose Options:";
        cin >> ch;
        if (ch == 1)
        {

            A.get_data(arr, size);
            A.read_data(arr, size);
        }
        else if (ch == 2)
        {
            D.get(arr, size);
            D.display(arr, size);
        }
        else
        {
            cout << "Invalid Option" << endl;
        }
        cout << "\nDo you want to continue (Y/N):" << endl;
        cin >> c;
        
    }
}