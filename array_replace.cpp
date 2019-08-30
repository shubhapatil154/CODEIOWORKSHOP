#include<iostream>
int main()
{
        int arr[10];
        int i;
        cout<<"enter the elements\n";
        for(i=0;i<5;i++)
        rearrange(arr);
        return 0;
}
 void rearrange(int arr[])
{
        for (int i=0; i < 5; i++)
        arr[i] += (arr[arr[i]]%5)*5;

         for (int i=0; i<5; i++)
         arr[i] /= 5;
}
