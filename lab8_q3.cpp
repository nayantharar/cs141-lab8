//include library
#include<iostream>
using namespace std;

// function for arranging the array elements
void arrange (int a[],int n)
{int flag,l,i;
 	
//loop 
 	do
 {	flag=0;
	for(i=0;i<(n-1);i++)
		
   {
	if (a[i]>a[i+1])
   	{ l=a[i];
     	  a[i]=a[i+1];
    	  a[i+1]=l;
     	  flag+=1;
	}
   }
	}
 while(flag!=0);
      
}

// functions printing kth maximum and kth minimum elements

void klarge(int a[],int n,int k)
  {
	cout<<" The "<< k<<"th largest element is "<<a[n-k] << endl;
   }
void ksmall(int a[],int n,int k)
  {
	cout<<" The "<< k<<"th smallest element is "<<a[k-1] <<endl;
   }

//main function 
int main()
{	int a[10],n,k;
 	
	//ask user for the limit
	cout<<" Enter number of elements in the array "<<endl;
 	cin>>n;
 	
	//array elements 
	cout<<" Enter array elements "<<endl;
 	for(int i=0;i<n;i++)
  	cin>>a[i];
 	
	//calling the function 
	arrange (a,n);
	
	//asks user for the value of k
	cout<<"value of k is "<<endl;
          cin>>k;
	
	//calling functions for k th largest and smallest elements
	klarge(a,n,k);
	ksmall(a,n,k);
	cout<<" "<<endl; 
 
          return 0;
}
//end of program
