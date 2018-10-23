#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef unsigned int u16;

typedef struct Geci
{
	u16 time;
	char name[60];
	struct Geci *pnext;
}geci;


geci *ci_index_insert(geci *head , int a)				//�ҵ�(����ֵ)
{
	geci *temp;
	int i=0;
	temp=head;
	while(i<a)
	{
		temp=temp->pnext;
		i++; 
		if(temp==NULL)
		return NULL;
	}
	return temp;
}

int geci_len(geci *head)							//������
{
	int i=0;
	geci *temp;
	temp=head;
	while(temp!=NULL)
	{
		temp=temp->pnext;
		i+=1;
	}
	return i;
}

void ci_Print(geci *head)
{
	system("cls");
	u16 t;
	geci *temp,*p;
	temp=head;
	while(1)
	{
		p=temp;
		printf("%s",p->name);
		temp=temp->pnext;
		t=temp->time - p->time;
		if(t>999999)
		{
			Sleep(10000);
			return ;
		}
		Sleep(t);
//		system("pause");
	}
	system("pause");
}


geci *ci_swap(geci *head,int a , int b)
{
	geci *temp;
	geci *p1,*p2,*p3,*p4;
	p2=ci_index_insert(head,a);
	p4=ci_index_insert(head,b);
	if(p2==head)
	{
		if(p2->pnext==p4)
		{
			p2->pnext=p4->pnext;			//�ͷ�p4
			p4->pnext=p2;					//������ϵ 
			head=p4;						//�ƶ�ͷ��� 
		}
		else
		{
			p3=ci_index_insert(head,b-1);		//��ȡP4ǰһ���ڵ� 
			p3->pnext=p4->pnext;			//�ͷ�p4 
			p4->pnext=p2->pnext;			//������ϵ 
			p2->pnext=p3->pnext;			//p2����p4λ�� 
			p3->pnext=p2;
			head=p4;						//����ָ��ͷ��� 
		}
	}
	else
	{
		p1=ci_index_insert(head,a-1);
		if(p2->pnext==p4)
		{
			p2->pnext=p4->pnext;			//�ͷ�p4
			p4->pnext=p2;					//������ϵ 
			p1->pnext=p4; 
		}
		else
		{
			p3=ci_index_insert(head,b-1);
			p1->pnext=p2->pnext;
			p3->pnext=p4->pnext;
			p4->pnext=p1->pnext;
			p2->pnext=p3->pnext;
			p3->pnext=p2;
			p1->pnext=p4;
		}
	}
	return head;
}





geci *ci_sort(geci *head)
{
	geci *p1,*p2;
	int a,b,i;
	i=geci_len(head);
	for(a=0;a<i-1;a++)
	{
		for(b=a+1;b<i;b++)
		{
			p1=ci_index_insert(head,a);
			p2=ci_index_insert(head,b);
			if(p1->time > p2->time)
			{
				head=ci_swap(head,a,b);
			}
		}
	}
	return head;
}