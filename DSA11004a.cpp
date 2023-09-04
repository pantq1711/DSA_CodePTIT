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
	if(root == NULL) return ;
	if(root -> data == u) makeRoot(root, u, v, c);
	else {
		insert(root -> left, u, v, c);
		insert(root -> right, u, v, c);
	}
}
void levelorder(node *root){
	queue <node*> q;
	q.push(root);
	cout << root -> data << ' ';
	while(q.size()){
		node *tmp = q.front(); q.pop();
		if(tmp -> left != NULL){
			cout << tmp -> left -> data << ' ';
			q.push(tmp -> left);
		}
		if(tmp -> right != NULL){
			cout << tmp -> right -> data << ' ';
			q.push(tmp -> right);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
		for(int i=0; i<n; ++i){
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u);
				makeRoot(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		levelorder(root);
		cout << endl;
	}
}
