#include<iostream>
using namespace std ;
class kQueue
{
    public :
    int n ; 
    int k;
    int *front ;
    int *rear ;
    int *next ;
    int *arr ;
    int freespot ;

    kQueue(int n , int k)
    {
        this->n = n;
        this->k = k; 
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        arr = new int[n];
        freespot = 0;

        for(int i = 0 ; i< k ; i++)
        {
            front[i] = - 1;
            rear[i] = -1 ;
        }
        for(int i = 0 ; i< n ; i++)
        {
            next[i] = i+1;
        }
        next[n-1] = -1 ;
    }

    void push(int x, int qn)
    {
        if(freespot == -1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        // step 1 : initialise index 
        int index = 0 ;
        // step 2 : index -> freespot 
        index = freespot;
        // step 3 : update freespot 
        freespot = next[index];
        //step 4 : check for first element to put index in front[qn] else put index in next[rear[qn]]
        if(front[qn-1] == -1)
        {
            front[qn-1] = index;
        }
        else
        {
            next[rear[qn-1]] = index ;
        }
        // step 5 : update next[index]
        next[index] = -1 ;

        // step 6 : update rear[qn]
        rear[qn] = index;

        // step 7 : insert element into arr
        arr[index] = x; 
    }
    int pop(int qn)
    {
         if(front[qn-1] == -1)
         {
            cout << " Queue Overflow" << endl ;
            return -1;
         }
         // index find kro 
         int index = front[qn-1];
         // front update kr do 
         front[qn-1] = next[index];
         // free slot manage kro jo pop krne sy mili 
         next[index] = freespot;
         freespot = index ;
         return arr[index];
    }
};
int main()
{
    kQueue kq(10, 3);
    kq.push(5, 1);
    kq.push(10, 2);
    kq.push(15, 3);
    kq.push(20, 1);
    cout << kq.pop(1)<< endl;
    cout << kq.pop(2)<< endl;
    cout << kq.pop(3)<< endl;
}