#include <iostream>

using namespace std;

int main()
{
    int arr[100][100],rows,columns,i,j;
    cout<<"Enter rows and column size"<<endl;
    cin>>rows>>columns;
    int val=1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            arr[i][j]=val;
            val=val+1;
        }
    }
    i=0;
    while(i<columns)
    {
        if(i%2==0)
        {
            j=0;
            while(j<=rows-1)
            {
                cout<<arr[j][i]<<" ";
                j++;
            }
        }
        else
        {
            j=rows-1;
            while(j>=0)
            {
                cout<<arr[j][i]<<" ";
                j--;
            }
        }
        cout<<" ";
        i++;
    }
    return 0;
}
