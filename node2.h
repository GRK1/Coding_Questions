template<typename t>
class node
{
public:
    t data;
    node<t>* next;
    node(t data)
    {
        this->data=data;
        this->next=NULL;
    }
};
