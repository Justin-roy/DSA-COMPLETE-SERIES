#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int Size;
    int Rear;
    int Front;
    int *A;
protected:
private:
};
void Enqueue(Queue *Q,int x)
{
   if(Q->Rear==Q->Size-1)
    cout<<"Queue is Full"<<endl;
   else
   {
       Q->Rear++;
       Q->A[Q->Rear] = x;
   }
}
int Dequeue(Queue *Q)
{
    int x = -1;
    if(Q->Front == Q->Rear){
     cout<<"Queue is Empty"<<endl;
    }
    else
    {
        Q->Front++;
        x = Q->A[Q->Front];
    }
    return x;
}
void Display(Queue Q)
{
    for(int i=Q.Front+1;i<=Q.Rear;i++)
    {
        cout<<Q.A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Queue Q;
    cout<<"Enter the Size of the Queue: ";
    cin>>Q.Size;
    Q.A = new int[Q.Size];
    Q.Front = Q.Rear = -1;
    int ch;
    do
    {
      cout<<"\n\n\tQueue Operations\t\n\n";
      cout<<"1.Insert Element In Queue(EnQueue)"<<endl;
      cout<<"2.Delete Element In Queue(DeQueue)"<<endl;
      cout<<"3.Display"<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter Your Choice: ";
      cin>>ch;
      system("cls");
      switch (ch)
      {
      case 1:int ele;
             cout<<"Enter the Element: ";
             cin>>ele;
             Enqueue(&Q,ele);
          break;
      case 2:cout<<"Deleted Element is: "<<Dequeue(&Q)<<endl;
          break;
      case 3:Display(Q);
          break;
      }
    }while(ch!=4);
return 0;
}
