#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL) {}
};
void intail(ListNode*&head, int data) {
	if (head == NULL) {
		head = new ListNode(data);
		return;
	}
	ListNode*tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}

	tail->next = new ListNode(data);
	return;
}
void buildlist(ListNode*&head) {
	int n;
	cin >> n;
	while (n--) {
		int data;
		cin >> data;
		intail(head, data);
	}
}
void print(ListNode*n) {
	while (n != NULL) {
		cout << n->val << " ";
		n = n->next;
	}
}
ListNode* oddEvenList(ListNode* head) {
	if (head == NULL)
		return NULL;
	ListNode* odd_head = NULL;
	ListNode* odd_tail = NULL;
	ListNode* even_head = NULL;
	ListNode* even_tail = NULL;
	ListNode *temp = head;
	bool is_odd = 1;
	while (temp != NULL) {
		if (is_odd) {
			if (odd_head == NULL) {
				odd_head = odd_tail = temp;
			}
			else {
				odd_tail->next = temp;
				odd_tail = temp;
			}
			temp = temp->next;
			odd_tail->next = NULL;
		}
		else {
			if (even_head == NULL) {
				even_head = even_tail = temp;
			}
			else {
				even_tail->next = temp;
				even_tail = temp;
			}
			temp = temp->next;
			even_tail->next = NULL;
		}
		is_odd = !is_odd;
	}
	odd_tail->next = even_head;
	return odd_head;
}
int main() {
	fastIO
	ListNode*n1 = NULL;
	buildlist(n1);
	cout << "Original List: " << print(n1);
	cout << endl;
	n1 = oddEvenList(n1);
	cout << "Modified List: " << print(n1);
}
