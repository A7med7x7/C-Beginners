#include <iostream>
#include <string>

using namespace std;
int main()
{
    
    int a=0; 
    
    cout <<" what is your age";
    cin >> a; 
    char g = '\0';
    cout << "enter your gender"; 
    cin >> g;
    if (a < 18 && g == 'm')
        cout << "boy " << "male" << endl; 
    else if (a >= 18 && g == 'm')
        cout << "man " << "male" << endl;
    else if (a < 18 && g == 'f')
        cout << "girl " << "female" << endl; 
    else if (a >= 18 && g == 'f')
        cout << "women " << "female" << endl; 
    else 
        cout << "there is no  data "; 
    
     return 0;
        
        
           
    
}