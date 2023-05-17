
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

struct info {
    int data ;
    info* next ;
};

info* root = NULL ;


void insert_begin ( int n ){

    info *node = new info ;
    node->data = n ;
    node->next = NULL;

    if( root == NULL )
        root = node ;
    else{
       node->next = root ;
       root = node ;
    }
}

void insert_end ( int n ){

    info *node = new info ;
    node->data = n ;
    node->next = NULL;

    if( root == NULL )
        root = node ;
    else{
        info * temp = root ;

        while( temp->next != NULL )
            temp = temp->next ;
        temp->next = node ;
    }
}

void insert_position ( int n , int pos ) {

    info* node = new info ;
    info* temp = root ;

    node->data = n ;

    if( pos == 1 ){
        node->next = root ;
        root = node ;
    }
    else {
        for(int i = 2 ; i < pos ; i++ )
            temp = temp->next ;

        node->next = temp->next ;
        temp->next = node ;

    }

}


void show(){
    info* node = root ;
    while(node != NULL ){
        cout << node->data << " ";
        node = node->next ;
    }
    cout << endl;
}

int main(){
    int n , x , p  ;
    cin >> n ;

    for( int i = 0 ; i < n ; i++ ) {
        cin >> x ;
        insert_begin(x);
        insert_end(x);
    }

    for( int i = 1 ; i <= 1 ; i++ ){
        cin >> x >> p ;
        insert_position ( x , p ) ;
    }

    show();

return 0;
}
