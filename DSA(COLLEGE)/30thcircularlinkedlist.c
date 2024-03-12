//circular linked list

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
int main()
{
    node first=NULL;
    int choice;
    while(1)
    {
        printf("Enter your choice:\n1.Insert front\n2.Insert rear\n3.Delete front\n4.Delete rear\n5.Display\n6.Search\n");
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
    t = create_node();
    if (first == NULL)
    {
        t->link = t; 
        return t;
    }
    else
    {
        node c = first;
        while (c->link != first)
        {
            c = c->link;
        }
        c->link = t;
        t->link = first;
        return t; 
    }
}

node insert_rear(node first)
{
    node t, c;
    t = create_node();
    if (first == NULL)
    {
        return t;
    }
    c = first;
    while (c->link != first)
    {
        c = c->link;
    }
    c->link = t;
    t->link = first;
    return first;
}
node display(node first)
{
    node c = first;
    if (first == NULL)
    {
        printf("No nodes present\n");
        return first;
    }
    printf("The name(s) are:\n");
    do
    {
        printf("%s\n", c->name);
        c = c->link;
    } while (c != first); 
    return first;
}

node delete_front(node first)
{
    node c, a;
    if (first == NULL)
    {
        printf("No nodes to be deleted\n");
    }
    else if (first->link == first)
    {
        free(first);
        return NULL;
    }
    else
    {
        c = first;
        a = first;
        while (a->link != first)
        {
            a = a->link;
        }
        first = first->link;
        a->link=first;
        free(c);
    }
    return first;
}

node delete_rear(node first)
{
    node c, prev;
    if (first == NULL)
    {
        printf("No nodes to be deleted\n");
        return NULL;
    }
    if (first->link == first) // Only one node in the list
    {
        free(first);
        return NULL;
    }
    prev = NULL;
    c = first;
    while (c->link != first)
    {
        prev = c;
        c = c->link;
    }
    free(c);
    prev->link = first; // Update the previous node's link to point to the first node
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
    while(c->link!=first)
    {
        if(strcmp(c->name,find)==0)
        {
            printf("Search found at node %d\n",count);
        }
        count++;
        c=c->link;    
    }
    if(strcmp(c->name,find)==0)
    {
        printf("Search found at node %d\n",count);
    }
    return first;
}