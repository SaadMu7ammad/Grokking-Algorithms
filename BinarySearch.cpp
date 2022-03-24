#include <iostream>

using namespace std;

int main()
{
    //the sorted array that user want to serach in
    int arr[100];
    for (int i = 1; i <= 100; i++)
    {
        arr[i - 1] = i;
    }




    int operationNum = 0;


    int len = sizeof(arr) / sizeof(arr[0]);  //to know the length of the array 
    int left = 0;


    int right = len - 1;
    int mid = (left + right) / 2;

    int num;
    cin >> num;
    while (right >= left)
    {

        ++operationNum;

        if (num < arr[mid])
        {

            right = mid - 1;

        }

        else if (num > arr[mid])
        {

            left = mid + 1;

        }

        else if (num == arr[mid])
        {
            // show the effecient of the algorithms by print the num of operatios to find any number 
            cout << "we found it :)\nafter  " << operationNum << " operations ";

            return 0;

        }
        mid = (left + right) / 2; //re update the value of the mid



    }

    cout << " Did not find that number ";

    return 0;
}