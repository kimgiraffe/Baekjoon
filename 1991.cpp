#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	char data;
	struct Node *leftChild, *rightChild;
} node;

node *newNode(char c)
{
	node *New;
	New = (node*)malloc(sizeof(node));
	New->data = c;
	New->leftChild = NULL;
	New->rightChild = NULL;
	return New;
}

void inorder(node *ptr)
{
	if (ptr == NULL)
		return;

	inorder(ptr->leftChild);
	printf("%c", ptr->data);
	inorder(ptr->rightChild);
}
void preorder(node *ptr)
{
	if (ptr == NULL)
		return;

	printf("%c", ptr->data);
	preorder(ptr->leftChild);
	preorder(ptr->rightChild);
}
void postorder(node *ptr)
{
	if (ptr == NULL)
		return;

	postorder(ptr->leftChild);
	postorder(ptr->rightChild);
	printf("%c", ptr->data);
}

int main(void)
{
	node * root[27];
	char a, b, c, arr[81][2];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf(" %c %c %c", &a, &b, &c);
		arr[i][0] = b, arr[i][1] = c;
		root[i] = newNode(a);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][0] == root[j]->data)
				root[i]->leftChild = root[j];
			if (arr[i][1] == root[j]->data)
				root[i]->rightChild = root[j];
		}
	}

	preorder(root[0]);
	printf("\n");
	inorder(root[0]);
	printf("\n");
	postorder(root[0]);

	return 0;
}