#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef struct TreeNode {
	struct TreeNode* left;
	struct TreeNode* right;
	int key;
	int cnt;
}TreeNode;

TreeNode* insert_Node(TreeNode* Root, int key)
{
	if (Root == NULL) {
		TreeNode* tmp = (TreeNode*)malloc(sizeof(TreeNode));
		tmp->left = tmp->right = NULL;
		tmp->key = key;
		tmp->cnt = 1;

		return tmp;
	}

	if (key < Root->key)
		Root->left = insert_Node(Root->left, key);
	else if (key > Root->key)
		Root->right = insert_Node(Root->right, key);
	else if (key == Root->key)
		Root->cnt++;

	return Root;
}

TreeNode* Search(TreeNode* Root, int key)
{
	if (Root == NULL)
		return NULL;

	if (Root->key == key)
		return Root;
	else if (Root->key < key)
		return Search(Root->right, key);
	else
		return Search(Root->left, key);
}

int main(void)
{
	TreeNode* Root = NULL, *tmp = NULL;
	int N, M, e;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf(" %d", &e);
		Root = insert_Node(Root, e);
	}
	scanf("%d", &M);

	for (int i = 0; i < M; i++) {
		scanf(" %d", &e);
		tmp = Search(Root, e);

		if (tmp == NULL)
			printf("0 ");
		else
			printf("%d ", tmp->cnt);
	}


	return 0;
}