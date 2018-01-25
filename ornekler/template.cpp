
//--------ornek3: template function------------------------------------------

#include <iostream>
using namespace std;

template <class Type>
Type larger(Type x, Type y);

int main()
{
cout << "Line 1: Larger of 5 and 6 = "<< larger(5, 6) << endl; 
cout << "Line 2: Larger of A and B = "<< larger('A', 'B') << endl; 
cout << "Line 3: Larger of 5.6 and 3.2 = "<< larger(5.6, 3.2) << endl; 



 getchar();
 getchar();
        return 0;
}
//---------------------------------------------------------------------------

template <class Type>
Type larger(Type x, Type y)
{
if (x >= y)
return x;
else
return y;
}

//--------------------------------------------------------------------------