#include <iostream>
#include <vector>
using namespace std;

void RemoveFirstAndLastSpace(vector<char>&t)
{
   int n = t.size();
   if(t[0] == 32)//removing first space
    t.erase(t.begin());
   else if(t[n-1] == 32)//removing last space
    t.erase(t.begin()+n-1);
}
void RemoveExtraSpace(vector<char>&t)
{
   //removing extra spaces
    int n = t.size();
   for(int i=0;i<n;i++)
   {
     if(t[0] == 32 && t[n-1] == 32){//removing first and last space
      t.erase(t.begin());
      t.erase(t.begin()+n-1);
     }
     else{
      if(t[i] == 32 && t[i+1] == 32)
      t.erase(t.begin()+i);
     }
   }
}
void reverseWords(vector<char>&st)
{
   int s =0;
   int e = st.size()-1;
   while(s<e)
   {
     swap(st[s++],st[e--]);
   }
   //RemoveFirstAndLastSpace(st);
   RemoveExtraSpace(st);
}
int main()
{

   vector<char> st = {' ','t','h','e',' ',' ','s','k','y',' ','i','s',' ',' ','b','l','u','e',' '};
   vector<char> st1 = {'t','h','e',' ',' ','s','k','y',' ','i','s',' ',' ','b','l','u','e'};
   for(char t:st)
    cout<<t;cout<<endl;
   reverseWords(st);
   for(char t:st)
    cout<<t;
return 0;
}
