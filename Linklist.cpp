# include <iostream>
using namespace std;
struct Node{
    int data; // du lieu cua node 
    Node *next; // Dia chi cua node tiep theo trong danh sach lien ket 
};
typedef struct Node* node; //  Khi ma cap phat 1 node se k can ghi la node* nua  chi can dung node 
// Tao mot noi moi voi du lieu la so nguyen x 
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
// Kiem tra rong 
bool empty(node a){
    return a == NULL;
}
// Node có bao nhiêu phần tử 
int Size(node a){
    int cnt = 0;
    while(a!=NULL){   // a khong tien toi NULL
        a = a->next; // Cho node hien tai nhay sang node tiep theo, khi nao di chuyen den Null thi ket thuc lap 
    }
}
// Them 1 phan tu vao dau danh sach lien ket 
void insertFirst(node &a, int x){   
    node tmp = makeNode(x);
    if(a==NULL){
        a = tmp; 
    }else{
        tmp->next = a;
        a = tmp;
    }
}
// Them 1 phan tu vao cuoi danh sach lien ket 
void insertLast(node &a, int x){
    node tmp = makeNode(x);
    if(a == NULL){
        a = tmp;
    }
    else{
        node p = a; 
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
}
// Them 1 phan tu vao giua danh sach 
void insertMiddle(node &a,int x, int pos){
    int n = Size(a);
    if(pos <= 0 || pos > n+1){
        cout<<"Vi tri khong hop le";
    }
    if(n == 1){
        insertFirst(a,x);  return;
    }else if(n == pos + 1){
        insertLast(a,x);   return;
    }
    node p = a;
    for(int i=1;i<pos-1;i++){
        p = p->next;
    }
    node tmp = makeNode(x);
    tmp->next = p->next;
    p->next = tmp;
}
// Xoa phan tu o dau 
void deleteFirst(node &a){
    if(a == NULL) return;
    a = a->next;
} 
// Xoa phan tu o cuoi 
void deleteLast(node &a){
    if(a == NULL) return;
    node truoc = NULL;  node sau = a;
    while(sau->next != NULL){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){   // Trong node con 1 phan tu 
        a = NULL;
    }else{  // Trong node con 2 phan tu 
        truoc->next = NULL;
    }
}
// Xoa o giua 
void deleteMiddle(node &a, int pos){
    if(pos <=0 || pos > Size(a)) return;
    node truoc = NULL, sau = a;
    for(int i=1;i<pos;i++){
        truoc = sau;
        sau = sau->next;
    }
    if(truoc == NULL){
        a = a->next;
    }
    else{
        truoc->next = sau->next;
    }
}
void in(node a){
    cout << "---------------------------------\n";
    while(a!=NULL){
        cout << a->data <<" ";
        a = a->next;
    }
    cout << "---------------------------------\n";
}
void sapxep(node &a){
    for(node p=a;p!=NULL;p=p->next){
        node min = p;
        for(node q = p->next;q!=NULL;q = q->next){
            if(q->data < min->data){
                min = q;
            }
        }
        int tmp = min->data;
        min->data = p->data;
        p->data = tmp;
    }
}
int main(){
    node head = NULL;
    cout <<"--------------MENU----------------\n";
    cout <<"1. Chen phan tu vao dau danh sach\n";
    cout <<"2. Chen phan tu vao cuoi danh sach\n";
    cout <<"3. Chen phan tu vao giua danh sach\n";
    cout <<"4. Xoa phan tu o dau danh sach\n";
    cout <<"5. Xoa phan tu o cuoi danh sach\n";
    cout <<"6. Xoa phan tu o giua danh sach\n";
    cout <<"7. Duyet danh sach lien ket\n";
    cout <<"8. Sap Xep cac phan tu trong danh sach theo thu tu tang dan\n";
    cout << "---------------------------------\n";
    cout <<"Nhap lua chon: ";
    int lc; cin >> lc; 
    if(lc == 1){
        int x; cout <<"Nhap gia tri can chen: "; cin >> x;
        insertFirst(head,x);
    }
    else if(lc == 2){
        int x; cout <<"Nhap gia tri can chen: "; cin >> x;
        insertLast(head,x);
    }
    else if(lc == 3){
        int x; cout <<"Nhap gia tri can chen: "; cin >> x;
        int pos; cout <<"Nnap vi tri can chen: "; cin >> pos;
        insertMiddle(head,x,pos);
    }
    else if(lc == 4){
        deleteFirst(head);
    }
    else if(lc == 5){
        deleteLast(head);
    }
    else if(lc == 6){
        int pos; cout <<"Nnap vi tri can chen: "; cin >> pos;
        deleteMiddle(head,pos);
    }
    else if(lc == 7){
        in(head);
    }
}