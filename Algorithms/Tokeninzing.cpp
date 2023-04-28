/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    scanf("%[^\n]",&str);
    char *token = strtok(str, " ,!");
    int i;
   vector <string>data;
   while (token != NULL)
  {
       data.push_back(token);
       token = strtok(NULL, " ");
   }
  for(i=0;i<data.size();i++)
  {
      cout<<data[i]<<endl;
  }
    return 0;
}

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
	string line = "GeeksForGeeks,is a!must try";
	stringstream stream(line);
	string intermediate;
	while(getline(stream, intermediate, ' '))
	{
		cout<<intermediate<<endl;
	}
}



/*


#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int
main ()
{

  char gfg[100] = "giygggggggggggggwaegtasmahmudmozahed";

  const char s[] = "miyag";
  char *tok;
  vector < string > data;
  tok = strtok (gfg, s);

  while (tok != 0)
    {
      data.push_back (tok);
      tok = strtok (0, s);
    }

  return (0);
}
*/





