#include<bits/stdc++.h>
using namespace std;

typedef struct cell node ;
typedef struct cell* nodePtr;
struct cell{
    char elm;
    nodePtr parent;
    nodePtr lChild;
    nodePtr rChild;
    cell(char key){
        elm = key;
        parent = nullptr;
        lChild = rChild = nullptr ;

    }
};

nodePtr root = nullptr;
int size = 0 ;
void startTree(){

}
nodePtr rChild(nodePtr v){
    return v->rChild;
}

nodePtr lChild(nodePtr v){
    return v->lChild;
}

nodePtr parent(nodePtr v){
    return v->parent;
}
char element(nodePtr v){
    return v->elm;
}
nodePtr getRoot(){
    return root;
}
nodePtr sibling(nodePtr v){
    return (v == v->parent->lChild)? v->parent->rChild : v->parent->lChild;
}
bool isExternal(nodePtr v){
    return (v->lChild == nullptr && v->rChild == nullptr);
}
bool isInternal(nodePtr v){
    return (v->lChild != nullptr || v->rChild != nullptr);
}
bool isRoot(nodePtr v){
    return (v == root);
}
void swapElm(nodePtr a,nodePtr b){
    char temp = a->elm;
    a->elm = b->elm;
    b->elm = temp ;
}

void replaceElm(nodePtr a,char key){
    a->elm = key;
}

void inorder(nodePtr v){
    if(isExternal(v)){
        //printf("%c ",v->elm);
        return ;
    }
    inorder(v->lChild);
    //printf("%c ",v->elm);
    inorder(v->rChild);

}
void postorder(nodePtr v){
    if(isExternal(v)){
        //printf("%c ",v->elm);
        return ;
    }
    postorder(v->lChild);
    postorder(v->rChild);
    ////printf("%c ",v->elm);

}
void preorder(nodePtr v){
    if(isExternal(v)){
        //printf("%c ",v->elm);
        return ;
    }
    //printf("%c ",v->elm);
    preorder(v->lChild);
    preorder(v->rChild);
    

}

template<typename _Tp>
class Q
{
    _Tp *A;
    int __f , __r , __size, __cap;
    
    public:

    Q(int cap):__cap(cap){
        A = ( _Tp *)malloc( __cap * sizeof( _Tp));
        __f = -1 ; __r = -1 ; __size = 0 ;
    }
    ~Q(){
        delete A;
    }

    void enqueue( _Tp __val){
        if( __f == -1){
            __f++;
            __r++;
            A[ __f ] = __val ;
            return ;
        }

        if( size() == __cap ){
            cout<<"queue is empty";
            return ;
        }
        __r = (++ __r  % __cap) ;
        A[ __r  ] = __val ;
        __size++ ;
    }
    void dequeue(){
        if(size() == 0){
            cout<<"queue is empty";
            return ;
        }
        __f ++ ;
        __size -- ;
    }

    _Tp front(){
        return A[ __f ];
    }
    _Tp rear(){
        return A[ __r ];
    }
    _Tp* begin(){
        return A + __f ;
    }
    _Tp* last(){
        return A + __r ;
    }
    int size(){
        if( __r < __f){
            return (__cap-__f + __r + 2);
        }
        else
            return __r - __f + 1 ;
    }
};



nodePtr deserialise(string s){
    Q<nodePtr> *q  = new Q<nodePtr>(100);
    nodePtr root;
    root = new node(s.at(0));
    q->enqueue(root);
    int i = 1 ;
    while(i < s.length()){
        nodePtr p = q->front();
        q->dequeue();
        if(s[i] != 'N')
            p->lChild = new node(s.at(i));
        i++ ;
        if(s[i] != 'N')
            p->rChild = new node(s[i]);
        i++ ;
        if(p->lChild)
            q->enqueue(p->lChild);
        if(p->rChild)
            q->enqueue(p->rChild);
    }
    return root ;
}

string serialise(nodePtr r){
    string ret;
    queue<nodePtr> q;
    q.push(r);
    while(!q.empty()){
        nodePtr p = q.front();
        q.pop();
        if(p == nullptr){
            ret.push_back('N');
            continue;
        }
        q.push(p->lChild);
        q.push(p->rChild);
    }
    return ret;
}

int main(){
    

    nodePtr a = new node('A');
    nodePtr b = new node('B');
    nodePtr c = new node('C');
    nodePtr d = new node('D');
    nodePtr e = new node('E');
    nodePtr f = new node('F');
    nodePtr g = new node('A');
    nodePtr h = new node('B');
    nodePtr i = new node('C');
    nodePtr j = new node('E');
    nodePtr k = new node('F');
    nodePtr l = new node('A');
    

    a->lChild = b;
    a->rChild = c;
    b->lChild = d;
    d->lChild = g;
    d->rChild = h;
    c->lChild = e;
    c->rChild = f;
    e->lChild = i;
    i->rChild = k;
    f->lChild = j;
    j->rChild = l;

    nodePtr root = a;
    string s = serialise(root);
    nodePtr r = deserialise(s);
    return 0;
}