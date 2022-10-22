#include <iostream>
using namespace std;

int main() {
    
    int x = 0,s = 0,num = 0; 
   
    while (x < 5){
        cout << "what is your number" << endl; 
        cin >> num;
        s = num + s;
        x++;
        
        
        
    }
    cout << "sum = " << s << endl;

    return 0;
}

