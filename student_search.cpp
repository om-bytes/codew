#include <iostream>
using namespace std;


int main() {

int roll[5];
int searchID;

cout<<"Enter roll no of 5 students: \n";

 for(int i = 0; i<5; i++)
{
  cin>>roll[i];

}
cout<<"\nEnter Roll No to search : ";
cin>>searchID;

	for(int i=0; i<5; i++) 
	{
		if(roll[i] == searchID)
			{
				cout<<"Student Found";
				return 0;
			}
	}	
	cout<<"Student Not Found";
}
