#include<bits/stdc++.h>
using namespace std;

int main(){
    string t , p ;
    getline( cin , t ) ;
    getline( cin , p ) ;

    int d1 = t.size() , d2 = p.size() , index = 0 , j  ;

    for(int i = 0 ; i <= d1-d2 ; i++ ){

            for(j = 0  ; j < d2 ; j++ ){
                if ( p[j] != t[i+j] ){
                    break ;
                }
            }

            if( j == d2 ){
                index = i + 1 ;
                break;
            }

    }

    if ( index )
        cout << "Patten Matched . Index : " << index << endl;

    else
        cout << "Not Found\n";

return 0;
}

