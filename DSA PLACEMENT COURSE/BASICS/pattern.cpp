

#include<iostream>
using namespace std;
int main()
{   

}

/* I  PATTERN RECTANGLE
* * * * *
*       *
*       *
*       *
* * * * *
int row=1;
    for(row;row<6;row++)
    {
        if(row==1||row==5)
        {   for(int i=0;i<5;i++)
            cout<<"* ";
        }
        else
        {   for(int q=0;q<5;q++)
            {   if(q== 0|| q ==4)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
*/





/* II PATTERN PYRAMID
***
**
*
for (int j=3;j>0;j--)
    {
        for(int i=0;i<j;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
*/
/*
    * * * *
     * * *
      * *
       *
 
/////n-1 spaces in the first row

    
    int n;
    cout<<"Enter the number of rows";
    cout<<endl;
    cin>>n;

        for(int row=0;row<n;row++)
        {
            for(int cl=0;cl<row;cl++)
            {
                cout<<" ";
            }
            for(int cl=0;cl<n-row;cl++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }

*/

/*
0 
1 1 
2 2 2 
3 3 3 3 
4 4 4 4 4 

int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {   
        for(int col=0;col<row+1;col++)
        {
            cout<<row<<" ";
        }cout<<endl;
        
    }
*/