#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data = x;
		left = right = NULL;
	}
};
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root -> left = new node(v);
	else root -> right = new node(v); 
}
void insertRoot(node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root -> data == u){
		makeRoot(root, u, v, c);
	}
	else{
		insertRoot(root -> left, u, v, c);
		insertRoot(root -> right, u, v, c);
	}
}
bool check(node *root){
	if(root == NULL) return 1;
	if(root -> left == NULL && root -> right == NULL) return 1;
	if(root -> left != NULL && root -> right != NULL){
		return check(root -> left) && check(root -> right);
	}
	return 0;
}
int main(){
	int t = 1;
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
			else insertRoot(root, u, v, c);
		}
		cout << check(root);
		cout << endl;
	}
}
