//include  libary
#include<iostream>
using namespace std;

// function for merging 
void merge (int a[],int n,int ar[],int k,int m[])
	
{	int i;
 
//loop for merging the arrays
 
	for(i=0;i<n;i++)
   	     m[i]=a[i];
 
    	for(i=n;i<n+k;i++)
             m[i]=ar[i-n];
 
	cout<<"printing the merged array"<<endl;
	for(i=0;i<n+k;i++)
	cout<<" "<<m[i]<<endl;
}

//function for finding the maximum and minimum of the two arrays
void arrange (int a[],int n)
{	int flag,t;
 	
//loop for arranging the array elements in ascending order
 	do
 	{	flag=0;
		for(int i=0;i<(n-1);i++)
   		{	if (a[i]>a[i+1])
    		{ t=a[i];
     		  a[i]=a[i+1];
    		  a[i+1]=t;
		 flag++;
			}
		}
}
 while(flag!=0);
cout<<"Maximum of the elements in both the array is "<<a[n-1]<<endl;
cout<<" Minimum of the elements in both the array is "<<a[0]<<endl;
}

//main function 
int main()
{	int a[20],ar[20],m[40],n,k;
 	
	//ask user for the limit of first array
	cout<<" Enter number of elements in the 1st array "<<endl;
 	cin>>n;
 	
	//ask user for array elements 
	cout<<"Enter array elements for first array"<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//ask user for the limit of seconded array
	cout<<" Enter number of elements in the 2nd array "<<endl;
 	cin>>k;
 	
	//ask user for array elements 
	cout<<" Enter array elements for second array"<<endl;
 	for(int i=0;i<k;i++)
  	cin>>ar[i];
	
	//calling the function 
	merge (a,n,ar,k,m);
 
	//calling function to find minimum of maximum of the two arrays
	arrange(m,(n+k));
	cout<<" "<<endl;
 return 0;
}


