/*Insertion sort:
Organizing cards in hands:
when playing the card game we often use an approach similar to insertion sort to organize the card
they pick one card at a time to and insert in the correct position maintaining the sorted sequence 
write a program regarding the sorted sequence.
*/
#include <iostream>

using namespace std;
int main(){
int n,i,j,k;
cout << "Size of array : " << endl;
cin >> n;
float arr[n];
cout << "Enter array elements: " << endl;
for (i=0;i<n;i++){
cin >> arr[i];
}
for (i=1;i<n;i++){
k = arr[i];
j = i-1;
while (j>=0 && arr[j]>k){
arr[j+1] = arr[j];
j = j-1;
}
arr[j+1] = k;
}
for (i=0;i<n;i++){
cout << "Sorted sequence number is  : "<<i <<"\n";
cout << arr[i] << endl;
}
return 0;
}
