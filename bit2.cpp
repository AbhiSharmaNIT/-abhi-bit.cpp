// Ques:- Clear the bit at a perticular position ?

#include <iostream>
using namespace std;

int clearBit(int n, int i)
{

    return (n ^ (1 << i));
}
int main()
{

    cout << clearBit(5, 1) << endl;
    return 0;
}

// Ques:- Update the bit at a perticular position ?
#include <iostream>
using namespace std;

int updateBit(int n, int i)
{

    int mark = ~(1 << i); // we can use '~' directly without declearing !
    return (n & mark);
}
int main()
{

    cout << updateBit(5, 2) << endl;
    return 0;
}
