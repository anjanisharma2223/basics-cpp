#include <iostream>

using namespace std;

int main()
{
    int a[6]={7,8,9,2,6,9};
    int temp=0,k=3,target=17;
    int i=0,j=0;
    while(i<(6-2))
    {
        while(j<6)
        {
            if((j-i)<k)
            {
                temp+=a[j];
            }
            else if(temp==target)
            {
                cout<<"true";
            }
            else
            {
                j++;
                temp+=a[j]-a[i];
                i++;
            }
        }
        
    }
    return 0;
}

