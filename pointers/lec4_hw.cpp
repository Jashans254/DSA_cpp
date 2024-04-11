#include<iostream>
using namespace std;

//problem -1 
// lower to upper
// void modifyString(char *str)
// {
//     while(*str)
//     {
//         if(*str>='a' && *str<='z')
//         {
//             *str = *str -'a' +'A';
//         }
//         str++;
//     }
// }

//   // //problem - 2 
//     // reverse a string
// void reverseString ( char *str)
// {
//     char *end = str;
//     while(*end)
//     {
//         end++;

//     }
//     end--;
//     while(str<end)
//     {
//         char temp = *str;
//         *str = *end;
//         *end = temp;
//         str++ , end--;
//     }
// 

// //problem- 3

// void concatenateAndPrint(char *str1 ,const char *str2)
// {
//     while(*str1)
//     {
//         str1++;
//     }
//     while((*str1 = *str2))
//     {
//         str1++ , str2++;
//     }
// }

//  //problem - 4
//     void updateValues(int *a , int *b)
//     {
//         *a +=*b;
//         *b = abs(*a - 2*(*b));
//     }

// //problem - 5 
// //function to  swap two numbers
// void foo( int *i ,  int *j )
// {
//     *i = *i + *j;
//     *j = *i- *j;
//     *i = *i - *j;
// }

//problem - 6
void countVowelsANDConsonants(const char*str ,int &vowels , int &consonants)
{
    vowels = consonants = 0 ;

    while(*str)
    {
        char ch = tolower(*str);
        if(isalpha(ch)){
            if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'  )
            {
                vowels++;
            }
            else{
                consonants++;
            }
        }
        str++;
    }
}
int main()
{
    // //problem -1 
    // // lower to upper
    // char myString[] = "helloworld";
    // modifyString(myString);
    // cout<<myString;

    // //problem - 2 
    // reverse a string
    // char myString[] = "Programming";
    // reverseString(myString);
    // cout<<myString;

    // //problem - 3
    // char first[] = "Good";
    // const char second[] = "Morning";
    // concatenateAndPrint(first , second);
    // cout<<first;


    // //problem - 4
    // int x = 5 , y = 3 ;
    // updateValues(&x , &y);
    // cout<<x<<" "<<y;

    // // problem - 5

    // int a = 4 , b = 5;
    // foo(&a , &b);
    // cout<<a<<" "<<b;

    //problem - 6 
    const char *text = "Hello World";
    int numsVowels , numConsonants;
    countVowelsANDConsonants(text , numsVowels , numConsonants);
    cout<<"Vowels:" <<numsVowels<<" Consonants: "<<numConsonants;
    return 0 ;
}