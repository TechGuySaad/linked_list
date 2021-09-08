#include <iostream>
using namespace std;

template <class Type>
Type larger(Type x, Type y);

int main()
{
    larger(2,3);
    larger("string","char");
    larger(2.0,3.5);


}
template<class Type>
Type larger(Type x, Type y)
{
    if(x >= y) 
    {
        cout<<x<<" is larger."<<endl;
    }

    else
    {
        cout<<y<<" is larger."<<endl;
    }

    return 0;

}