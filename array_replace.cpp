#include<iostream>
using namespace std;
void rearrange(int arr[])
{
        for (int i=0;i<5;i++)
        {
            arr[i]+=(arr[arr[i]]%5)*5;
        }
         for (int i=0;i<5;i++)
         {
            arr[i]/=5;
         }
         for(int i=0;i<5;i++)
         {
             cout<<arr[i];
         }
}


int main()
{
        int arr[5];
        int i;
        cout<<"enter the elements\n";
        for(i=0;i<5;i++)
        cin>>arr[i];
        rearrange(arr);
        return 0;
}
 
