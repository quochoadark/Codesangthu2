# include <iostream>
using namespace std;
// Stack 
// struct Node {
//     int data;
//     Node *next;
// };
// typedef struct Node* node;
// bool empty(node top){
//     return top == NULL;
// }
// int getSize(node top){
//     int cnt = 0;
//     while(top!=NULL){
//         cnt++;
//         top = top->next;
//     }
//     return cnt;
// }
// node makeNode(int x){
//     node tmp = new Node();
//     tmp->data = x;
//     tmp->next = NULL;
//     return tmp;
// }
// void push(node &top, int x){
//     node tmp = makeNode(x);
//     if(top == NULL){
//         top = tmp;
//     }
//     else{
//         tmp->next = top;
//         top = tmp;
//     }
// }
// void pop(node &top){
//     if(top == NULL) return;
//     top = top->next;
// }
// int getTop(node top){
//     return top->data;
// }
// int main(){

// }

// Quere
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
bool empty(node back){
    return back == NULL;
}
int getSize(node back){
    int cnt = 0;
    while(back != NULL){
        cnt++;
        back = back->next;
    }
    return cnt;
}
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void push(node &back, int x){
    node tmp = makeNode(x);
    tmp->next = back;
    back = tmp;
}
void pop(node &back){
    node truoc = NULL, sau = back;
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        back = NULL;
    }else{
        truoc->next = NULL;
    }
}
// front: lay phan tu o dau hang doi 
int front(node back){
    while(back->next != NULL){
        back = back -> next;
    }
    return back->data;
}