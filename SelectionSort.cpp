#include <iostream>
#include<bits/stdc++.h>

using namespace std;



int freq[100000] {0};

int findmaxi(int arr[],int len)
{
    int maxi=INT_MIN;
    for(int i=0; i<len; i++ )
    {

        if(maxi<arr[i]&& freq[arr[i]]==0)
        {
            maxi=arr[i];

        }

    }
    freq[maxi]++;
    return maxi;
}

void display (vector<int>arr,int len)
{

    for(int i=0; i<len; i++ )
    {
        cout<<arr[i]<<" ";
    }


}
int main()
{

    // this implementations only for the array contain different numbers


    int arr[10] {99,88,77,66,985,2556,10,3356,4,0}; //Random distinct array numbers
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>newarr;


    while(n--)
    {
        int maxx=findmaxi(arr,10);

        newarr.push_back(maxx);
    }


    display(newarr,newarr.size());





    return 0;
}
