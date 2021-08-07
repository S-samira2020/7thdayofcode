#include<iostream>
using namespace std;
void myself(int num)
{
    if(num == 0)
    {
        return ;
    }
    else
    {
        int mypart = num % 8;
        int lastpart  = num / 8;
        myself(lastpart);
        cout << mypart << endl;

    }
}
int main()
{
     myself(123);
}

