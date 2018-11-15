//include library
#include<iostream>
using namespace std;

//function for finding the sum
int sumarr(int a[],int n)
{int s=0;
	
	//loop for finding the sum of array elements
	for (int i=0;i<n;i++)
 	s+=a[i];
	
	//printing sum 
	cout<<" Sum of the elements of the array is "<<s <<endl;
	return 0;
}

//main function 
int main()
{	int a[10],n;
 	
	//ask user the number of elements in the array
	cout<<" Enter number of elements in the array "<<endl;
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"\n Enter array elements ";
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	// call summing function 
	sumarr(a,n);
	return 0;
}



