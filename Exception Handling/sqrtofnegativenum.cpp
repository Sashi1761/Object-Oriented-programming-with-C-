#include<iostream>
#include<math.h>
using namespace std;
 int main() 
{
    int num;
    cout<<"Enter th value of a number"<<endl;
    cin>>num;

    try
    {
        if(num<0)
        {
            throw(num);
        }
        else
        {
            cout<<"The Square root of given no is"<<sqrt(num)<<endl;
        }
    }
    catch(int i)

    {
        //cout<<"Squareroot of -ve number "<<n1<<"cannot be found"<<endl;
        float n2 = fabs(i);
        cout<<"The squareroot is "<<sqrt(n2)<<endl;
      
    }
    
    
  
  
  
return 0;
}