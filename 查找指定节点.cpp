#include<stdio.h>
#include<stdlib.h>
 
struct node{
	char data;
	int ltag,rtag;
	struct node *lchild,*rchild;
};
 
struct node *node_arr[100]; //保存下所有结点的指针
int node_arr_top=0;
struct node* createTree()  //样例ABD##E##C#FG##H##
{
	char ch=getchar();
	if(ch!='#'){
		struct node* p=(struct node*)malloc(sizeof(struct node));
		node_arr[++node_arr_top]=p; //保存指针
		p->data = ch;
		p->lchild = createTree();
		p->rchild = createTree();
        p->ltag = p->rtag = 0;
		return p;
	}
	return NULL;
}
 
//二叉树中序线索化
void convertToXiansuo(struct node *root, struct node **last)
{
    if(root)
    {
        convertToXiansuo(root->lchild,last);  //线索化左子树
        if(root->lchild==NULL){          //让左指针指向前驱
            root->lchild=*last;
            root->ltag=1;
        }
        if((*last)!=NULL && (*last)->rchild==NULL){ //root作为后继,被last右指针所指
            (*last)->rtag=1;
            (*last)->rchild=root;
        }
        *last = root;
        convertToXiansuo(root->rchild,last); //线索化右子树
    }
}
 
void xianSuoHua(struct node *root)  //中序线索化
{
    struct node *last=NULL; //最先访问的结点的前驱就是NULL
    convertToXiansuo(root,&last);
    last->rtag=1;   //最后访问的结点没有后继，但也要标记右指针
}
 
 
struct node* preOfBackOrder(struct node* p)  //求后序序列中p的前驱
{
    if(p==NULL)return NULL;           //p空,不存在前驱
    if(p->rtag==0)return p->rchild;   //有右孩子
    if(p->ltag==0)return p->lchild;   //无右，但有左孩子
    while(p&&p->ltag==1)              
        p=p->lchild;
    if(p)return p->lchild;            //找到了
    return NULL;                      //不存在
}
 
 
int main()
{
    int i;
    printf("请输入先序序列以建树: ");
    struct node* root=createTree();
    xianSuoHua(root);
    for(i=1;i<=node_arr_top;i++)    //输出每个结点的信息
    {
        struct node* p=node_arr[i];
        struct node* r=preOfBackOrder(p);
        printf("后序序列中%c的前驱是%c\n",p->data,r?r->data:'-');
    }
}

