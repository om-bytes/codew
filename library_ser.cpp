#include<iostream>
using namespace std;
int main() {

  int book[5];
  int searchID;

	cout<<"Enter 5 Book ID : \n";

	for(int i=0; i<5; i++)
	{
		cin>> book[i];

	}

	cout<<"\nEnter Book Id to search : ";
	cin>>searchID;

	for(int i=0; i<5; i++) 
	{
		if(book[i] == searchID)
			{
				cout<<"Book Found at location "<<i;
				return 0;
			}
	}	
	cout<<"Book Not Found";
}
