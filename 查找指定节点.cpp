#include<stdio.h>
#include<stdlib.h>
 
struct node{
	char data;
	int ltag,rtag;
	struct node *lchild,*rchild;
};
 
struct node *node_arr[100]; //���������н���ָ��
int node_arr_top=0;
struct node* createTree()  //����ABD##E##C#FG##H##
{
	char ch=getchar();
	if(ch!='#'){
		struct node* p=(struct node*)malloc(sizeof(struct node));
		node_arr[++node_arr_top]=p; //����ָ��
		p->data = ch;
		p->lchild = createTree();
		p->rchild = createTree();
        p->ltag = p->rtag = 0;
		return p;
	}
	return NULL;
}
 
//����������������
void convertToXiansuo(struct node *root, struct node **last)
{
    if(root)
    {
        convertToXiansuo(root->lchild,last);  //������������
        if(root->lchild==NULL){          //����ָ��ָ��ǰ��
            root->lchild=*last;
            root->ltag=1;
        }
        if((*last)!=NULL && (*last)->rchild==NULL){ //root��Ϊ���,��last��ָ����ָ
            (*last)->rtag=1;
            (*last)->rchild=root;
        }
        *last = root;
        convertToXiansuo(root->rchild,last); //������������
    }
}
 
void xianSuoHua(struct node *root)  //����������
{
    struct node *last=NULL; //���ȷ��ʵĽ���ǰ������NULL
    convertToXiansuo(root,&last);
    last->rtag=1;   //�����ʵĽ��û�к�̣���ҲҪ�����ָ��
}
 
 
struct node* preOfBackOrder(struct node* p)  //�����������p��ǰ��
{
    if(p==NULL)return NULL;           //p��,������ǰ��
    if(p->rtag==0)return p->rchild;   //���Һ���
    if(p->ltag==0)return p->lchild;   //���ң���������
    while(p&&p->ltag==1)              
        p=p->lchild;
    if(p)return p->lchild;            //�ҵ���
    return NULL;                      //������
}
 
 
int main()
{
    int i;
    printf("���������������Խ���: ");
    struct node* root=createTree();
    xianSuoHua(root);
    for(i=1;i<=node_arr_top;i++)    //���ÿ��������Ϣ
    {
        struct node* p=node_arr[i];
        struct node* r=preOfBackOrder(p);
        printf("����������%c��ǰ����%c\n",p->data,r?r->data:'-');
    }
}

