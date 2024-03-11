//singly linked list

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char name[100];
    struct Node *link;  
};
typedef struct Node *node;
node insert_front(node first);
node insert_rear(node first);
node create_node();
node delete_front(node first);
node delete_rear(node first);
node display(node first);
node search(node first);
node middle(node first);
int main()
{
    node first=NULL;
    int choice;
    while(1)
    {
        printf("Enter your choice:\n1.Insert front\n2.Insert rear\n3.Delete front\n4.Delete rear\n5.Display\n6.Search\n7.Middle element\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:first=insert_front(first);
                    break;
            case 2:first=insert_rear(first);
                    break;
            case 3:first=delete_front(first);
                    break;
            case 4:first=delete_rear(first);
                    break;
            case 5:display(first);
                    break;
            case 6:first=search(first);
                    break;
            case 7:first=middle(first);
                    break;
            default:exit(0);
        }
    }
}
node create_node()
{
    node n;
    n=(struct Node*)malloc(sizeof(struct Node));
    if(n==NULL)
    {
        printf("Insufficient memory\n");
        exit(0);
    }
    printf("Enter student name\n");
    scanf("%s",n->name);
    n->link=NULL;
    return n;
}
node insert_front(node first)
{
    node t;
    t=create_node();
    if(first==NULL)
    {
        return t;
    }
    t->link=first;
    first=t;
    return first;
}
node insert_rear(node first)
{
    node t,c;
    t=create_node();
    if(first==NULL)
    {
        return t;
    }
    c=first;
    while(c->link!=NULL)
    {
        c=c->link;
    }
    c->link=t;
    return first;
    
}
node display(node first)
{
    node c;
    c=first;
    if(first==NULL)
    {
        printf("No nodes present\n");
    }
    else
    {
        printf("The name(s) are:\n");
        while(c!=NULL)
        {
            printf("%s\n",c->name);
            c=c->link;
        }   
    }
}
node delete_front(node first)
{
    node c;
    if(first==NULL)
    {
        printf("No nodes to be deleted\n");
    }
    else if(first->link==NULL)
    {
        return NULL;
    }
    else
    {
        c=first;
        first=first->link;
        free(c);
    }
    return first;
}
node delete_rear(node first)
{
    node c,prev;
    if(first==NULL)
    {
        printf("No nodes to be deleted\n");
    }
    else if(first->link==NULL)
    {
        printf("The node deleted is:%s",c->name);
        return NULL;
    }
    else
    {
        c=first;
        while(c->link!=NULL)
        {
            prev=c;
            c=c->link;
        }
        prev->link=NULL;
        free(c);
    }
    return first;
}
node search(node first)
{
    node c;
    char find[100];
    printf("Enter the name to be searched:\n");
    scanf("%s",find);
    c=first;
    if(first==NULL)
    {
        printf("No nodes to be searched\n");
    }
    int count=1;
    while(c!=NULL)
    {
        
        if(strcmp(c->name,find)==0)
        {
            printf("Search found at node %d\n",count);
        }
        count++;
        c=c->link;    
    }
    return first;
}
node middle(node first)
{
    node c,z;
    c=first;
    z=first;
    int count=1;
    while(c->link!=NULL)
    {
        c=c->link;
        count++;
    }
    c=c->link;
    count=(count/2);
    for(int a=0;a<count;a++)
    {
        z=z->link;
    }
    printf("Middle element is:%s\n",z->name);
    return first;
}