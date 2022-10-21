/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[]="5634732";
    double d=0;
    for(int i=0;i<strlen(ch);i++)
    {
        d=d*10+(ch[i]-'0');
    }
    cout<<d;
}

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s = "12345";
	stringstream geek(s);
	int x;
	//string s1=geek.str();
	cout<<geek.str()<<endl;
	//operator >> — read something from the stringstream object,
	geek >> x;
	cout<< x;
	return 0;
}



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=2346767;
	stringstream str;
	// operator << — add a string to the stringstream object.
	str<<n;
	string s=str.str();//str() — to get and set string object whose content is present in stream.
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i];
	}
}

*/