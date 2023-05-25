#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int ar[500] , t_size , p_size , sz  ;

int main(){
    string t , p ;

    getline( cin , t ) ;
    getline( cin , p ) ;

    t_size = t.size() ;
    p_size = p.size() ;

    deque< char > dq [p_size+1] , all_chr ,tmp   ;
    dq[0].pb('^') ;

    for( int i = 0 ; i < t.size() ; i++ ) {
            ar[ (int) (t[i]) ]  += 1 ; // assumed all alphabet is Lowercase ;
            if( ar[ (int) (t[i]) ] == 1  ) all_chr.pb( t[i] );
    }

    sz = all_chr.size();

    for ( int i = 0 ; i < p_size ; i++ ){
        if(i) dq[i+1] = dq[i];
        dq[i+1].push_back(p[i]) ;

    }
    /* for ( int i = 0 ; i <= p_size ; i++ ){
        for(auto a : dq[i] ) cout <<a ; cout << endl;

    }*/


    int table[p_size][sz] ;
    memset(table , -1 , sizeof(table)) ;

    for(int i = 0 ; i < sz ; i++ ){



            for(int j = 0 ; j < p_size ; j++ ){
               tmp = dq[j];
               tmp.pb( all_chr[i] );


               while( !tmp.empty() ){

                    for(int k = 0 ; k <= p_size ; k++ ){
                        if(tmp == dq[k]) {

                            table[j][i] = k ;
                            break;
                        }
                    }
                    if(table[j][i] != -1 ) break ;
                    tmp.pop_front() ;
               }
               if( table[j][i] == -1 ) table[j][i]+=1;


            }


    }
/*
    for( int i = 0 ; i < p_size ; i++ ){
            cout << i << " -- >  : ";
        for(int j = 0 ; j < sz ; j++ ){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
*/
    int ans  = 0 , st = 0  ;

    for( int i = 0 ; i < t_size ; i++ ){
        for( int j = 0 ; j < sz ; j++ ){
            if( t[i] == all_chr[j] ){
                    //cout << st << " "<<j << " - > " << table[st][j] << endl;
                st = table[st][j] ;
                if(st == p_size) {
                    ans = i-p_size+2;
                    //cout << ans << " answer milgea \n";
                    break ;
                }
            }
        }
        if ( ans) break;
    }

    if(ans)
        cout << "pattern is appeared in Given Text . Index : "<<ans << endl;
    else
        cout<<"Sorry Bro . Maf koren Please\n";





return 0;
}

