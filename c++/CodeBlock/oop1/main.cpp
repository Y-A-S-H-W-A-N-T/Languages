#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    int a[x][y],i,j;
    for(i=0;i<x;i++)
    {
            for(j=0;j<y;j++)
            {
                cin>>a[i][j];
            }
    }
    for(i=0;i<x;i++)
    {
            for(j=0;j<y;j++)
            {
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
    }
    return 0;
}
