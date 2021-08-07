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
        int mypart = num % 16;
        int lastpart  = num / 16;
        myself(lastpart);
        cout << mypart << endl;

    }
}
int main()
{
     myself(123);
}
