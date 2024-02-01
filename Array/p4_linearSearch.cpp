#include<iostream>
using namespace std;
int main()
{
    int arr[] = {54, 32,52,33,66,2};
    int n = 6;
    int x;//let the user enter 
    cout<<"Enter the number to be found: ";
    cin>>x;
    int index = - 1;//let index be a variable which stores the index of element if found , otherwise as array index start from 0 , -1 indicates not found
    for(int i = 0 ;i<=5;i++)
    {
        if(arr[i] == x)
        {
            index = i ; //update the index ,if found
            break; //and break out of the loop ,no need to travese further 
        }
    }
    cout<<"\nThe element is found at index "<<index<<" of the array";

    return 0;
}