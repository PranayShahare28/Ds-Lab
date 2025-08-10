#include<iostream>
using namespace std;

void hashing() { 
    int server, ID, server_index; 
    cout << "Enter the total number of servers: "; 
    cin >> server; 
    cout << "Enter your request ID: "; 
    cin >> ID; 
    server_index = ID % server; 
    cout << "Your request is accepted by Server: " << server_index << endl; 
  } 
  int main() { 
    
    char q; 
    while (1) { 
        hashing(); 
        cout << "Do you want to continue? Enter option:" << endl; 
        cout << "1) Enter any key for Yes." << endl; 
        cout << "2) Enter 'n' or 'N' for Exit" << endl;                        
 
        cin >> q;                           
        if(q=='n'||q=='N'){  
   break; }  
          } 
  return 0; 
}
