#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define btsize 10


int main()
{
    bitset<btsize>bt;// size must be deglare in compile time
    cout<<bt<<endl;;//all are zeroes
    bt.set();//set all bit to one
    cout<<bt<<endl;
    bt.reset();//again set all bit to zero;
    cout<<bt<<endl;
    //bitset<btsize>bt(7); binary represntion of 7;
    bitset<btsize>bt2(string(("1101")));
    bitset<btsize>bt3(string(("1101")));
    cout<<bt2<<endl;
    cout<<bt2[0]<<endl;//it will print 1; indexing starting from right tp left
    bt2[2]=0;//set the 3rd rightmose bit to 0;
    cout<<bt2<<endl;
    cout<<bt2.size()<<endl;//print the bitset bt2 size;
    cout<<bt2.count()<<endl;// count the number of 1 int bitet;
    cout<<bt2.size()-bt2.count()<<endl;// count the number of 0 int bitet;
    cout<<bt2.any()<<endl;//if bitset contains any 1 , it will return ;
    cout<<bt2.none()<<endl;//if bitset contains no 1 , it will return 1 else 0;
    bt2.set(2);//it will set 1 in index 2;
    cout<<bt2<<endl;
    bt2.reset(2);//it will set 0 in index 2;
    cout<<bt2<<endl;
    bt2.flip();//it will flip all ones to 0 and all zeroes to 1;
    cout<<bt2<<endl;
    bt2=bt2<<1;//leftsift by one digit. 0111->1110;
    cout<<bt2<<endl;
    bt2=bt2<<2;//leftsift by two digit. 0111->1100;
    cout<<bt2<<endl;
    bt2=bt2>>1;//rightsift by one digit. 0111->0011;
    cout<<bt2<<endl;
    bt2<<=2;//rightsift by two digit. 0111->0001;
    cout<<bt2<<endl;
    cout<<(bt3==bt2)<<endl;// return 0 or 1. brackets are mandatory;
    cout<<(bt3&bt2)<<endl;//bitwise and
     cout<<(bt3|bt2)<<endl;//bitwise or
      cout<<(bt^bt2)<<endl;/bitwise xor;

}

