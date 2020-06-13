#include<iostream>
#include<unordered_set>
using namespace std;

int nextNumber(int n){
	int sum=0;
	while(n>0){
	sum+=pow(n%10,2);
		n/=10;
	}
	return sum;
}
bool isHappy(int n){
	unordered_set<int> visited;
	while(!visited.count(n) and n!=1){
		visited.insert(n);
		n=nextNumber(n);
	}
	return n==1;
}
int main(){
	int n;
	cin>>n;
	cout<<isHappy(n);
}