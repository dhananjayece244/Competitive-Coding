// CPP code to segregate even odd 
// numbers in an array 
#include <bits/stdc++.h> 
using namespace std; 

// Function to segregate even odd numbers 
void arrayEvenAndOdd(int a[], int n) 
{ 

// 	int i = -1, j = 0,count=0; 
// 	int t; 
// 	while (j != n) { 
// 		if (arr[j] % 2 == 0) { 
// 			i++; 

// 			// Swapping even and odd numbers 
// 			swap(arr[i], arr[j]); 
// 			if(i!=j)
// 			count++;
// 		} 
// 		j++; 
// 	} 

// 	// Printing segregated array 
// 	cout<<count<<endl;
// 	for (int i = 0; i < n; i++) 
// 		cout << arr[i] << " "; 
int i=0,j=n-1,count=0;

while(i<j)
{
    if((a[i]%2)!=0 &&(a[j]%2)==0)  // odd even swap
    {
        swap(a[i],a[j]);
        i++;
        j--;
        count++;
    }
    else if((a[i]%2)!=0 &&(a[j]%2)!=0) // odd odd
    j--;
    else if((a[i]%2)==0 &&(a[j]%2)!=0)   // even odd
    {  i++; j--; // shouldnot j-- me added here
    }
    else if((a[i]%2==0) and (a[j]%2==0))  // this case needs to be there right
    {
         i++;
    }
}
cout<<count;
} 

// Driver code 
int main() 
{ 
	int arr[] = { 4,13,10,21,20 }; 
	int n = sizeof(arr) / sizeof(int); 
	arrayEvenAndOdd(arr, n); 
	return 0; 
} 

