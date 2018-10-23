
template <typename t>
class binarytree
{
    public:
    binarytree<t>* leftchild;
    binarytree<t>* rightchild;
    t data;
    binarytree(t data)
    {
       leftchild=NULL;
       rightchild=NULL;
       this->data=data;
    }
};

