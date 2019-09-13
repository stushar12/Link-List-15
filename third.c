#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node *reverse(struct node * head,int k)
{
  struct node *prev=NULL,*current=head,*next=NULL;
  int count =1;
  while(current!=NULL&&count<=k)
  {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    count++;
  }
if(next!=NULL)
{
  head->next=reverse(next,k);
}
return prev;
}
void display(struct node * p)
{
  while(p!=NULL)
  {
    printf("%d\n",p->data);
  p=p->next;
  }
}
int main()
{
struct node *p,*q;
p=create();
int k;
printf("\n Enter value of k  ");
scanf("%d",&k);
q=reverse(p,k);
display(q);
}
