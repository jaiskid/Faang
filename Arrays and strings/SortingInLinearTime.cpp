#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int left = 0;
	int c = 0;
	int right = n - 1;
	while (c <= right) {
		if (nums[c] == 0) {
			swap(nums[c++], nums[left++]);
		}
		else if (nums[c] == 2) {
			swap(nums[c], nums[right--]);
		}
		else {
			c++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}
	//Approach two 
	/*
	#include<iostream>
	#include<vector>
	using namespace std;
	int main() {
	int n;
	cin>>n;
	vector<int>nums;
	nums.resize(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int count0,count1,count2;
	count0=0,count1=0,count2=0;
	for(int i=0;i<n;i++){
		if(nums[i]==0){
			count0++;
		}
		else if(nums[i]==1){
			count1++;
		}
		else{
			count2++;
		}
	}
	while(count0--){
		cout<<0<<" ";
	}
	while(count1--){
		cout<<1<<" ";
	}
	while(count2--){
		cout<<2<<" ";
	}
	}
	*/
}
