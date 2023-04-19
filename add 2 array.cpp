#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> add(vector<int> arr1,vector<int> arr2){
	int i=arr1.size()-1;
	int j=arr2.size()-1;
	vector<int> ans;
	
	while(iiiiiii>=0 || j>=0){
		int k=arr1[i]+arr2[j];
		if(k>9 and i-1>=0){
			ans.push_back(k%10);
			arr1[i-1]+=1;
		}
		else if(k>9 and i==0){
		    ans.push_back(k);
		}
		else{
			ans.push_back(k);
		}
		i--;
		j--;
	}
	
	while(i>=0){
		//cout<<arr1[i];
		ans.push_back(arr1[i]);
		i--;
	}
	return ans;
	
}

int main(){
	
	vector<int> arr1={1,8,9};
	vector<int> arr2={9,7,6};
	
	vector<int> ans=add(arr1,arr2);
	reverse(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<i;
	}
	cout<<"hello"<<endl;
	return 0;
}
