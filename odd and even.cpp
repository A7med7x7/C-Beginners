#include <iostream>
#include <string>

using namespace std;
int main()
{
    int x=0; 
    //determine whether the number is even or odd
    cout << " what is your number" << endl;
    cin >> x; 
    
    if (x % 2 == 0)
            cout << " this is even " << endl; 
    else if  (x % 2 !=0)
        cout << "this is odd" << endl;
    
    
    return 0;
        
        
           
    
}