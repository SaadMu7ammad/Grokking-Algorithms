#include<bits/stdc++.h>
#define loop(n) for(int i = 0; i < n; i++)
typedef long long ll;
using namespace std;

void suiii()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int binary__search(int arr[],int num,int left,int right)
{

    while(right>=left)
    {
        int mid=(left+right)/2;


        if(num<arr[mid])
        {
            //remove the elements bigger than the number we search for
            right=mid-1;
            return binary__search(arr, num, left, right);

        }

        else if(num>arr[mid])
        {
            //remove the elements smaller than the number we search for

            left=mid+1;
            return binary__search(arr, num, left, right);

        }

        else if(num==arr[mid])
        {
            //base case
            return num;

        }



    }

    return -1;


}
int main()
{

    //the sorted array that user want to search in
    int arr[100];
    for(int i=1; i<=100; i++)
    {
        arr[i-1]=i;
    }

    int operationNum=0;


    int len=sizeof(arr)/sizeof(arr[0]);  //to know the length of the array
    int left=0;


    int right=len-1;

    int num;
    cout<<"enter a num you search for: ";
    cin>>num;

    int res=binary__search(arr,num,left,right);


    if(res!=num) cout<<"Did not find that number ";

    else cout<<"we found it \n";





    return 0;
}
