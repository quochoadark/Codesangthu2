# include <iostream>
using namespace std;
struct NUTCAY{
    int GiaTri;
    NUTCAY *pTrai, *pPhai;
};
struct Cay{
    NUTCAY *p;
}
// Node left right 
void NLR(CAY t){
    if(t.p!=NULL){
        cout << t->GiaTri<<"\t";
        NLR(t.p->pTrai);
        NLR(t.p->pPhai);
    }
}
// Left Node Right 
void LNR(CAY t){
    if(t.p!=NULL){
        NLR(t.p->pTrai);
        cout << t->GiaTri<<"\t";
        NLR(t.p->pPhai);
    }
}
// Left Right Node 
void LNR(CAY t){
    if(t.p!=NULL){
        NLR(t.p->pTrai);
        NLR(t.p->pPhai);
        cout << t->GiaTri<<"\t";
    }
}
int main(){

}