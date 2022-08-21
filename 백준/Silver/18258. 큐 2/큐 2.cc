#include <stdio.h>
#include <string.h>

typedef struct Queue {
    int data[2000000];
    int front, rear;
} Queue;

void init(Queue *q) {
    q->front = q->rear = -1;
}

int is_empty(Queue *q) {
    return (q->front == q->rear);
}

int size(Queue *q) {
    if (is_empty(q)) {
        return 0;
    }
    return (q->rear - q->front);
}

void push(Queue *q, int data) {
    q->data[++(q->rear)] = data;
}

int pop(Queue *q) {
    if (is_empty(q)) return -1;
    return q->data[++(q->front)];
}

int front(Queue *q) {
    if (is_empty(q)) return -1;
    return q->data[q->front + 1];
}

int back(Queue *q) {
    if (is_empty(q)) return -1;
    return q->data[q->rear];
}

int main(void) {
    Queue q;
    init(&q);

    int N;
    scanf("%d", &N);

    while(N--) {
        char str[6];
        scanf("%s", str);
        if (!strcmp(str, "push")) {
            int data = 0;
            scanf("%d", &data);
            push(&q, data);
        }
        else if (!strcmp(str, "front"))
            printf("%d\n", front(&q));
        else if (!strcmp(str, "back"))
            printf("%d\n", back(&q));
        else if (!strcmp(str, "pop"))
            printf("%d\n", pop(&q));
        else if (!strcmp(str, "size"))
            printf("%d\n", size(&q));
        else if (!strcmp(str, "empty"))
            printf("%d\n", is_empty(&q));
    }
    return 0;
}