#include <../../class_string/ClassString/MyString.h>
#include <binary_tree.h>


Binary_Tree::Binary_Tree(): root(nullptr)     //конструктор класса инициализирующий указатели нулями
{}


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

    if(node->data == word)
    {
        node->counter++;
    }

    if(root == nullptr)
    {
    node = new Node(word);
    }
    else
    {
        add_item(root, word);
    }

    if(word < node->data)
    {
        if(node->left != nullptr)
        {
            add_item(node->left, word);
        }
        else
        {
            node->left = new Node(word);
        }
    }
    else
    {
        if(node->right != nullptr)
        {
            add_item(node->right, word);
        }
        else
        {
            node->right = new Node(word);
        }
    }


}

size_t Binary_Tree::search(String & word)              //реализация
{

}

