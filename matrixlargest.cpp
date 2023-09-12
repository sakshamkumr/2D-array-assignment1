#include<iostream>
 
using namespace std;
 
int main()
{
    int array[5][5];
	int b1=1;
	
	int p;
	int q;
	int i;
	int j;
	
    cout<<"Please enter the number of rows and columns (MAX 5):";
    cin>>p>>q;
    
    cout<<"Please enter the array:"<<endl;
 
    for(i=0;i<p;i++)
        for(j=0;j<q;++j)
            cin>>array[i][j];
 
    for(i=0;i<p;++i)
        for(j=0;j<q;++j)
        {
            if(array[i][j]>b1)
                b1=array[i][j];
        }
 
    cout<<endl<<"Largest number is:"<<b1;
 
    return 0;
}