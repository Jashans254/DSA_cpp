//Number of occurances of a number in sorted array 
//https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    //first occurance 
	    int index = 0 , first = -1, last = -1;
	    int start = 0 , end = n-1;
	    while(start <=end)
	    {
	        int mid = start +(end - start )/2;
	        if(arr[mid]== x)
	        {
	            first = mid;
	            end = mid -1; //go to left
	        }
	        else if ( arr[mid]<x)
	        {
	            start = mid +1;
	        }
	        else
	        {
	            end = mid -1;
	        }
	    }
	    start = 0 , end = n-1;
	    while(start <=end)
	    {
	        int mid = start +(end - start )/2;
	        if(arr[mid]== x)
	        {
	            last= mid;
	            start = mid +1; //go to right
	        }
	        else if ( arr[mid]<x)
	        {
	            start = mid +1;
	        }
	        else
	        {
	            end = mid -1;
	        }
	    }
	    if(first == -1 && last == -1) return 0;
	    index = last - first +1;
	    return index;
	}
};