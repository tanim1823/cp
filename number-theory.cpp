/* Harmony series */
    const int mx = 1e7+123;
    int cnt[mx];
    int lim = 10;
    for(int i = 1;i<=lim; i++){
        for(int j =i;j<=lim; j+=i){
           cnt[j]++;
        }
    }
    dbg(cnt , lim+1);
