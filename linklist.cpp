#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;
  Node(int data)
  { this->data=data;
    next=NULL;
  }
};

Node * insertion()
{
    int data;
    cout<<"enter the data";
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        if(head==NULL)
        {
             Node *newnode=new Node(data);
       head=newnode;
       tail=newnode;
        }
        else
        {
            Node *newnode=new Node(data);
            tail->next=newnode;
            tail=tail->next;

        }

        cout<<"enter the next element";
        cin>>data;


    }
    //tail->next=head->next;
    return head;
}
bool detectLoop(Node *h)
{
    unordered_set<Node *> s;
    while (h != NULL)
    {
        // If we have already has this node
        // in hashmap it means their is a cycle
        // (Because you we encountering the
        // node second time).
        if (s.find(h) != s.end())
            return true;

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);

        h = h->next;
    }

    return false;
}
bool detectLoop2(Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL&&fast->next!=NULL)
    {
         slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }

    }
    return false;
}
Node* detectandremoveloop(Node *head)
{
    Node *slow=head;
    Node *fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    if(slow==fast)
    {
        slow=head;
        if(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;

        }
        fast->next==NULL;
        return slow;
    }
    else
    {
        return head;
    }

}
Node* removeduplicates(Node *head)
{
    Node *current=head;
    Node *vtr;
    while(current!=NULL)
    {
      if(current->data==current->next->data)
      {
          vtr=current->next->next;
          current->next=vtr;
          delete(current->next);

      }
      current=current->next;
    }
    return head;
}
Node *removeduplicates_unsortedlinklist(Node *head)
{
    Node* current=head;
    Node*prev=NULL;
    unordered_set<int> seen;
    while(current!=NULL)
    {
     if(seen.find(current->data)!=seen.end())//if it is seen
     {
         prev->next=current->next;
         delete(current);
     }
     else//if it is not seen
     {
       seen.insert(current->data);
        prev=current;
     }
     current=prev->next;
    }
    return head;

}
Node* sortedMerge(Node* a,Node* b)
{
    Node* result = NULL;

    /* Base cases */
    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);

    /* Pick either a or b, and recur */
    if (a->data <= b->data) {
        result = a;
        result->next = sortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = sortedMerge(a, b->next);
    }
    return (result);
}
Node *sortedmerge(Node *head1,Node *head2)
{
    Node *result;
    if(head1==NULL)
    {
       return head2;
    }
    else if(head2==NULL)
    {
        return head1;
    }
    if(head1->data<=head2->data)
    {
        result=head1;
        result->next=sortedmerge(head1->next,head2);
    }
    else if(head2->data<head1->data)
    {
        result=head2;
        result->next=sortedmerge(head1,head2->next);
    }
    return result;
}
Node *insert_at_pos(Node *head,int data,int pos)
{
    int count=0;
    Node* temp=head;

    while(temp!=NULL)
    {
        count++;
        if(count==pos-1)
        {
            Node *newnode=new Node(data);
            Node* ahead=temp->next;
            temp->next=newnode;
            newnode->next=ahead;
            return head;
        }
       temp=temp->next;
    }
    return head;
}
void printlinklist(Node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    Node* head1=insertion();
    //Node *head2=insertion();
    //Node* head3=sortedmerge(head1,head2);
    //printlinklist(head3);
    //Node *head4=insert_at_pos(head1,5,5);
    Node *head7=removeduplicates_unsortedlinklist(head1);
    printlinklist(head7);
   // bool ans=detectLoop(head1);
   // bool ans2=detectLoop2(head1);
    //cout<<ans<<endl<<ans2;
    //Node* answer=detectandremoveloop(head1);
    //printlinklist(answer);
    //cout<<answer->data;
   //Node* head=removeduplicates(head1);
    //printlinklist(head);

    //printlinklist(head1);
}
