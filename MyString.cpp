#include<bits/stdc++.h>
using namespace std;
class myString
{
    int size;
    char *s;
public:
    bool set(string ss)
    {
        int l=ss.size();
        if(l>size)
            return false;
        else
        {
            for(int i=0; i<l; i++)
            {
                s[i]=ss[i];
            }
            return true;
        }
    }
    myString()
    {
        size=100;
        s=(char*)malloc(sizeof(char)*size);
    }
    myString(int sz)
    {
        size=sz;
        s=(char*)malloc(sizeof(char)*size);
    }
    void print()
    {
        for(int i=0; i<size; i++)
            cout<<s[i];
    }
//    ~mystring()
//    {
//        cout<<"You deleted ";
//        for(int i=0; i<size; i++)
//            cout<<s[i];
//        cout<<endl;
//    }


};

int main()
{
    long long a=0,b=0,c,d,e,f=0,l,g,m,n,k,i,j,t,p,q;
    string s;
    cin>>n>>s;
    myString ob1(n);
    bool success=ob1.set(s);
    if(success)
        ob1.print();
    else
        cout<<"Sorry Wrong Input!"<<endl;

    return 0;
}
