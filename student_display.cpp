#include <iostream>

using namespace std;


int main() {

int roll[5];

cout<<"Enter roll no of 5 students: \n";

 for(int i = 0; i<5; i++)
{
  cin>>roll[i];

}

for(int j = 0; j<5; j++)
{
cout<<roll[j]<<" ";
}
return 0;

}
