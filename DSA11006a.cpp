#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left, *right;
	node (int x){
		data = x;
		left = right = NULL;
	}
};
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root -> left = new node(v);
	else root -> right = new node(v);
}
void insert(node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root -> data == u) makeRoot(root, u, v, c);
	else {
		insert(root -> left, u, v, c);
		insert(root -> right, u, v, c);
	}
}
void spiralorder(node *root){
	stack <node*> s1, s2;
	s1.push(root);
//	cout << root -> data << ' '; 
	while(s1.size() || s2.size()){
		while(s1.size()){
		node *tmp = s1.top(); s1.pop();
		cout << tmp -> data << ' ';			
			if(tmp -> right != NULL) s2.push(tmp -> right);
			if(tmp -> left != NULL) s2.push(tmp -> left);
		}
		while(s2.size()){
		node *tmp = s2.top(); s2.pop();
		cout << tmp -> data << ' ';			
			if(tmp -> left != NULL) s1.push(tmp -> left);
			if(tmp -> right != NULL) s1.push(tmp -> right);
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		node *root = NULL;
		for(int i=0; i<n; ++i){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeRoot(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		spiralorder(root);
		cout << endl;
	}
}
