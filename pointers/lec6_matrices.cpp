#include<iostream>
using namespace std;

int main() 
{
    // int *ptr  = new int[4];
    
    // int m = 5 ; // rows
    // int n = 4;// columns

    // // method 1
    // int *ptr1 = new int[4];
    // int *ptr2 = new int[4];
    // int *ptr3 = new int[4];
    // int *ptr4 = new int[4];
    // int *ptr5 = new int[4];

    // int i , j ;
    // i = 10 , j = 20 ;
    // int arr[100]

    //  better method

     // [matrix2d]
    // int m = 5 ; // rows
    // int n = 4;// columns
    //step 1 

    // //create a 1d array to store address
    // int **ptr = new int *[n]   ;

    // //step - 2 
    // // each address store an array 
    // for(int i = 0  ; i<n ; i++)
    // {
    //     ptr[i] = new int[m];
    // }

    // to access
    // cout<<"Enter values"<<endl;
    // for(int i = 0 ; i<n ; i++)
    // {
    //     for(int j = 0 ; j<m;j++)
    //     {
    //         cin>>ptr[i][j];
    //     }
    // }

    //   cout<<"Printing values"<<endl;
    // for(int i = 0 ; i<n ; i++)
    // {
    //     for(int j = 0 ; j<m;j++)
    //     {
    //         cout<<ptr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // delete [] ptr ; should not 
    // // instead 
    // for(int i  = 0 ; i<n;i++)
    // {
    //     delete[] ptr[i];
    // }

    // delete[] ptr;

    // make 3d array - arr[3][2][3]
    // int L = 3 , B = 2 , H = 3 ;
    // int ***ptr = new int **[L];

    // for(int i = 0  ; i<L ; i++)
    // {
    //     ptr[i] = new int *[B];
    //     for(int  j = 0 ; j<B ; j++)
    //     {
    //         ptr[i][j] = new int[H];
    //     }
    // }

    // for (int i = 0; i < L; i++) {
    // for (int j = 0; j < B; j++) {
    //     delete[] ptr[i][j]; // Deallocate memory for the innermost array
    // }
    // delete[] ptr[i]; // Deallocate memory for the second level of pointers
    // }
    // delete[] ptr; // Deallocate memory for the top-level pointer


//     //4d array
//     int ****ptr = new int ***[L];

// for (int i = 0; i < L; i++) {
//     ptr[i] = new int **[B];
//     for (int j = 0; j < B; j++) {
//         ptr[i][j] = new int *[H];
//         for (int k = 0; k < H; k++) {
//             ptr[i][j][k] = new int[G];
//         }
//     }
// }

// // Deallocation
// for (int i = 0; i < L; i++) {
//     for (int j = 0; j < B; j++) {
//         for (int k = 0; k < H; k++) {
//             delete[] ptr[i][j][k]; // Deallocate memory for the innermost array
//         }
//         delete[] ptr[i][j]; // Deallocate memory for the second level of pointers
//     }
//     delete[] ptr[i]; // Deallocate memory for the first level of pointers
// }
// delete[] ptr; // Deallocate memory for the top-level pointer


}