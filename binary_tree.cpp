#include <../../class_string/ClassString/MyString.h>
#include <binary_tree.h>
#include <cstring>

Binary_Tree::Binary_Tree(): root(nullptr)     //конструктор класса инициализирующий указатели нулями
{}

Node * Binary_Tree::Get_root()
{
    return root;
}

Node * Binary_Tree::Set_root(Node * node)              //метод записи
{
    this->root = node;
    return 0;
}

size_t Binary_Tree::Get_size()                         //метод вывода
{
    return size;
}

Node::Node(String & word): data(word), right(nullptr), left(nullptr), counter(1)     //counter(1) как минимум одно слово
{}

void Binary_Tree::add(String & word)                   //реализация (возможно лишний)
{

}

void Binary_Tree::add_item(Node * node, String & word)
{
    if(Get_root() == nullptr)         // !node
    {
    node = new Node;
    node->data = word;
    node->left = nullptr;
    node->right = nullptr;
    Get_root(node);
    }

    if(node->data > word)    //if(String std::strcpm(word, node->data) < 0)
    {
        if(node->left != nullptr)
        {
            add_item(node->left, word);
        }
        else
        {
            node->left = new Node;
            node->left->left = nullptr;
            node->left->right = nullptr;
            node->left->data = word;
        }
    }

    if(String std::strcpm(word, node->data) > 0)
    {
        if(node->right != nullptr)
        {
            add_item(node->right, word);
        }
        else
        {
            node->right = new Node;
            node->right->left = nullptr;
            node->right->right = nullptr;
            node->left->data = word;
        }
    }

    if(String std::strcpm(word, node->data) == 0)
    {
        node->counter++;
    }
}

size_t Binary_Tree::search(String & word)              //реализация
{

}

