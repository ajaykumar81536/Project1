#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int Ask_Weight(int *array,int i,int j)
{
    int sum=0;
    for(int k=i;k<=j;k++)
    {
        sum+=array[k];
    }
    return sum;
}

int Find_Index(int *array,int i,int j)
{
    if(i==j)
    {
        if(array[i]==10)
            return i;
        else
            return -1;
    }
    int m=(i+j)/2;
    int left=Ask_Weight(array,i,m);
    int right=Ask_Weight(array,m+1,j);
    
    if(left==10)
    {
        return Find_Index(array,i,m);
    }
    else if(right==10)
    {
        return Find_Index(array,m+1,j);
    }
    else
        return -1;
}

int main()
{
    int Lockers;
    int *array;
    cout<<"Enter the number of lockers (currently 10): ";
    cin>>Lockers;
    array=(int*)malloc(sizeof(int)*Lockers);

    ifstream in("input2.txt");
    if(!in.is_open())
    {
        cout<<"Unable to open input file."<<endl;
        return 1;
    }
    
    for(int i=0;i<Lockers;i++)
    {
        in>>array[i];
    }
    in.close();

    ofstream out("output2.txt");
    if(!out.is_open())
    {
        cout<<"Unable to open output file."<<endl;
        return 1;
    }

    int index = Find_Index(array,0,Lockers-1);
    if(index == -1)
    {
        out<<"No locker contains 10 kg gold."<<endl;
        out<<"Please give accurate data in input file !!"<<endl;
        out<<"\nThanking You "<<endl;
    }
    else
    {
        out<<"The index of locker containing 10 kg gold is: "<<index<<endl;
    }

    free(array); // Free dynamically allocated memory
    out.close();

    return 0;
}
