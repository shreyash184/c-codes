#include <bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

class Heap
{
    int *harr;
    int capacity;
    int size;
public:
    Heap(int cap)
    {
        capacity=cap;
        size=0;
        harr=new int[cap];
    }
    int parent(int i){return (i)/2;}
    int left(int i){return (i*2);}
    int right(int i){return (i*2+1);}
    int getMin(){return harr[0];}
    void Display();
    void insert(int k);
    void remove();
};

void Heap::insert(int k)
{
    int pos;
    size++;
    pos=size;
    harr[pos]=k;
    while(pos>1)
    {
        if(harr[pos]>harr[parent(pos)])
        {
            swap(&harr[pos],&harr[parent(pos)]);
            pos=parent(pos);
        }
    }
}

void Heap::remove()
{
    int last=harr[size];
    size--;
    int ptr=1;
    int l,r;
    l=left(ptr);
    r=right(ptr);
    harr[ptr]=last;
    while(l<=size)
    {
        if(harr[r]<=harr[l])
        {
            swap(&harr[ptr],&harr[l]);
            ptr=l;
        }
        else
        {
            swap(&harr[ptr],&harr[r]);
            ptr=r;
        }
        l=2*ptr;
        r=l+1;
    }
    cout<<endl;
}

void Heap::Display()
{
    for(int j=1;j<=size;j++)
        cout<<harr[j]<<endl;
}
int main()
{
    Heap h(10);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.Display();
    h.remove();
    h.Display();
    return 0;
}
