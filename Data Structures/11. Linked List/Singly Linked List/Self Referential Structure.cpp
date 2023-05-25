#include<bits/stdc++.h>
using namespace std;

struct self {
	int i;
	char c;
	struct self *ptr;
};

int main()
{

    struct self var1;
    var1.i=65;
    var1.c='A';
    var1.ptr=NULL;

    struct self var2;
    var2.i=66;
    var2.c='B';
    var2.ptr=NULL;

    //Magic happens here
    var1.ptr=&var2;

    cout<<var1.ptr->i <<" "<<var1.ptr->c <<endl;        //Actully called var2
}
