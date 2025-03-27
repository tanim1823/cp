#include<bits/stdc++.h>
using namespace std;
int B_Search(vector<int> v,int l,int h,int e){
    if(l<=h){
        int mid= l+(h-l)/2;
        if(v[mid]==e) return mid;
        else if(v[mid]<e) B_Search(v,mid+1,h,e);
        else B_Search(v,l,mid-1,e);
    }
    return -1;
}

int main() {
    vector<int> v;
    int n,t,c;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    t=1,c=1;
    for(int i=1;i<(2*n)/2;i++){
        int f= B_Search(v,0,i,v[i]);
        if(f==-1){
            c++;
        }
        if(t<c) t=c;
    }
    cout<<t<<endl;
    return 0;
}
