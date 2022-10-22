#include <iostream>
#include <string>

using namespace std;
int main()
{
    int x=0, y=0; 
    cout << "input 2 numbers" << endl; 
    cin >> x; 
    cin >> y; 
    if (x>y)
        cout<<"x is bigger than y " << endl; 
    else if (y > x)
        cout << "y is bigger than x" << endl; 
    else
        cout << "they are equal" << endl;
    
    return 0;
    
    
}