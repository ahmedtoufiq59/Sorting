#include<iostream>
using namespace std;
void sorting(int *array,int size)
{
    for(int step=0; step< size; step++)
    {
        for(int i=0; i<size-step-1;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}
/*
void print(int *array, int size)
{
    cout << array[size-1];
}
*/
int main()
{
    int data[]={15,1,88,2,33,-32,5,17};
    int size= sizeof(data)/sizeof(data[0]);
    sorting(data,size);
    cout<< "Maximum number in the array: ";
    cout << data[size-1];
    //print(data,size);
}
