#include<bits/stdc++.h>
using namespace std;

struct point {
	int x;
	int y;
};

struct point *fun(int a,int b)
{
	struct point *ptr = (struct point *) malloc(1*sizeof(struct point));
	ptr->x=a;
	ptr->y=b+5;

	return ptr;
}

void print(struct point *ptr)
{
	cout<<ptr->x<<" "<<ptr->y<<endl;
}

int main()
{
struct point *ptr;

ptr=fun(2,3);

print(ptr);
free(ptr);
return 0;


}
