#include<bits/stdc++.h>
using namespace std;
int a[100000];

int lower(int l,int n){
	int low=1,up=n,mid;
	while(low<=up){
		mid=(low+up)/2;
		if(a[mid]<l) low=mid+1;
		if(a[mid]>l) up=mid-1;
		if(a[mid]==l) return mid;
	}
	return low;
}
int uper(int r,int n){
	int low = 1, up = n, mid = 0;
	while(low<=up){
		mid=(low+up)/2;
		if(a[mid]>r) up=mid-1;
		if(a[mid]<r) low=mid+1;
		if(a[mid]==r) return mid;
	}
	return up;
}
int main(){
	int T=1,l,r,t,lb,ub;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<"Case "<<T++<<":\n";
		for(int i=1;i<=q;i++){
			cin>>l>>r;
			lb=lower(l,n);
			ub=uper(r,n);
			cout<<ub-lb+1<<"\n";
		}
	}
	return 0;
}
