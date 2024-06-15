#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

/* Program to write to a file */
// int main()
// {
//     //open the file
//     ofstream fout; //fout is an object of ofstream class
//     fout.open("hello.txt");
//     fout<<"hello world"; // write to the file ; create the file if not present
//     fout.close(); // release the resources
//     return 0;
// }

/* Program to read from a file */

// int main()
// {
//     //open the file
//     ifstream fin;
//     fin.open("hello.txt");
//     char ch;
//     while(!fin.eof())
//     {
//         //fin>>ch; // no space
//         ch = fin.get(); // read with space
//         cout<<ch;
//     }
//     fin.close();
//     return 0;
// }


/* Real Life Example */

// int main() 
// {
//     vector<int>arr(5);
//     cout<<"Enter the input : ";
//     for(int i=0;i<5;i++)
//     {
//         cin>>arr[i];
//     }
//     ofstream fout;
//     fout.open("input.txt");
//     fout<<"Original array : \n";
//     for(int i=0;i<5;i++)
//     {
//         fout<<arr[i]<<"\n";
//     }

//     fout<<"Sorted array : \n";
//     sort(arr.begin() , arr.end());
//     for(int i=0;i<5;i++)
//     {
//         fout<<arr[i]<<"\n";
//     }
//     fout.close();
//     return 0;
// }


/* Program to read multiple lines from a file */

int main()
{
    ofstream fout;
    fout.open("hello.txt");
    fout<<"hello world\n";
    fout<<"hello world 2\n";
    fout<<"hello world 3\n";
    fout.close();
    ifstream fin;
    fin.open("hello.txt");
    string s;
    while(getline(fin,s))
    {
        //getline(fin,s);
        cout<<s<<endl;
    }
    fin.close();
    return 0;
}