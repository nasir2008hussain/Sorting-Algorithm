#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        if(i!=min_index)
         swap(a[i],a[min_index]);
    }
}

void bubble_sort(int a[],int n)
{
    bool swapped = true;
    while(swapped)
    {
        swapped = false;
        for(int i=0;i<n-1;i++)
        {
                if(a[i+1]<a[i]){
                 swap(a[i+1],a[i]);
                 swapped=true;
                }
        }
    }
}

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int place=a[i];
        int j=i-1;
        while(j>=0 && place<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = place;
    }
}
int main()
{
    int a[]={36,24,12,6,10};
    int n=5;
   // selection_sort(a,n);
    display(a,n);
    //bubble_sort(a,n);
    insertion_sort(a,n);
    display(a,n);

}