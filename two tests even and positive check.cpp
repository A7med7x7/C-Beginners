#include <iostream>
#include <string>

using namespace std;
int main()
{
    
    int x = 0;
    cout << "what is your number " << endl; 
    cin >> x; 
    int y = 0; 
    cout << "chose a test to apply (1) or (2)" << endl;
    cin >> y; 
    // case number one determines whether the number is even or odd 
    // case number two determines whether the number is positive or negative 
    switch (y){
        case 1: 
            if (x % 2 == 0)
                cout << "this number is even"<< endl;    
            else 
                cout <<  "this number is odd" << endl;
            break; 
        case 2: 
            if (x > 0)
                cout << "this is a positive number" << endl; 
            if (x < 0)
                cout << "this is a negative number" << endl; 
            break;
        default: 
            cout << "sorry this is not listed" << endl; 
             
            
            
                
                        
    }
            
    
    
    
    return 0; 
           
    
}