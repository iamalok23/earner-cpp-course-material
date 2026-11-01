#include <iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> arr = {3,8,4,7,9};
    int n = arr.size();
    print(arr);

    for(int i=1;i<=n-1;i++){
        int j=i;

        while(j>=1 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    print(arr);
}







#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int x) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted element = %d\n", top->data);
    top = top->next;
    free(temp);
}

void display() {
    struct node *temp = top;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Stack elements: ");
    display();

    pop();

    printf("After pop: ");
    display();

    return 0;
}







#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char exp[100];
    int i, balanced = 1;
    char ch;

    printf("Enter an expression: ");
    scanf("%99s", exp);

    for (i = 0; i < strlen(exp); i++)
    {
        ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (top == -1)
            {
                balanced = 0;
                break;
            }

            char open = pop();

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '['))
            {
                balanced = 0;
                break;
            }
        }
    }

    if (top != -1)
        balanced = 0;

    if (balanced)
        printf("Parentheses are balanced.\n");
    else
        printf("Parentheses are not balanced.\n");

    return 0;
}