/* Harmony series */
/// Complexity O( n x ln(n) )
    const int mx = 1e7+123;
    int cnt[mx];
    int lim = 10;
    for(int i = 1;i<=lim; i++){
        for(int j =i;j<=lim; j+=i){
           cnt[j]++;
        }
    }
    dbg(cnt , lim+1);


/// Seive Of Eratosthense
/// Prime number 
/// Complexity O(n)
const int mx = 1e8+123;
// bool isPrime[mx];
bitset<mx> isPrime;
vector<int> primes;

void primeGen(int n){
    int sq = sqrt(n);
    for(int i = 3; i <=n; i+=2) isPrime[i] = 1;
    for(int i = 3; i<=sq;i+=2){
        if(isPrime[i]){
            for(int j = i*i; j<=n;j+=i){
                isPrime[j] = 0;
            }
        }
    }
    isPrime[2] = 1;
    primes.push_back(2);
    for(int i = 3; i<=n; i+= 2){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
}

 int lim = 20;
    primeGen(lim);
    dbg(primes);

/// End Of Prime Generation











