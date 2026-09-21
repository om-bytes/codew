#include <iostream>

using namespace std;

int main() {

float mrks[5];

cout<<"Enter marks:\n";
for(int i = 0; i < 5; i++) {
cin>>mrks[i];
}



for(int i=0; i<5 ; i++) {
for(int j = i + 1; j < 5; j++) {
if (mrks[i] < mrks[j]) {
int temp = mrks[i];
mrks[i] = mrks[j];
mrks[j] = temp;
}
}
}

cout<<"\nHighest to lowest marks is:"<<endl;
for(int i = 0; i < 5 ;i++) {
cout<<mrks[i]<<endl;
}
return 0;
}
