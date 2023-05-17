// First make a sieve , for even = 2 and for odd - get smallest prime divisor in the array . then check primeFact Function
// very Much Helpful for mutiple Quries
//Space : O(n) - Time : O ( logn )


int mx = 1000001;
int ar[1000001];

void sv (void) {
    for(int i = 2; i<= mx ; i+=2) ar[i] = 2;
    for(int i = 3; i*i <= mx ; i+=2) {
        if(!ar[i]){
            ar[i] = i ;
            if(i*i<=mx){
                for(int j = i*i ; j<=mx ; j+=(i*2))
                    ar[j] = i;
            }
        }
    }
}

vector<int> primeFact ( int n ){
    vector<int> vec;
    while(n!=1){
        vec.pb(ar[n]);
        n/=ar[n];
    }
    return vec;
}

int main(){
        sv();
        int n;
        cin>>n;
      vector<int> v = primeFact(n);
      for(auto a : v)
        cout<<a<<"  ";cout<<endl;
return 0;
}
