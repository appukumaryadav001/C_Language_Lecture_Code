#include <stdio.h>
#include<stdlib.h>
//Define the node structure
typedef struct Node
{
int data;
struct Node* next;

}node;
Node* createNode(int data)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(!newNode)
    {
        printf("memory error\n");
        exit(1);
    }
    newNode -> data = data;
    newNode -> Next = NULL;
    return newNode;


}
int 