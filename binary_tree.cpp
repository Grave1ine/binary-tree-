#include <../../class_string/ClassString/MyString.h>
#include <binary_tree.h>


Binary_Tree::Binary_Tree(): root(nullptr)     //конструктор класса инициализирующий указатели нулями
{}

size_t Binary_Tree::Get_size()                         //метод вывода
{
    return size;
}

Binary_Tree::Node::Node(const String & word): data(word), right(nullptr), left(nullptr), counter(1)     //counter(1) как минимум одно слово
{}

void Binary_Tree::add(String & word)                   //пользовательский метод добавления элементов
{

    if(root == nullptr)                                //или !root
    {
        root = new Node(word);                         //так ли?
    }
    else
    {
        add_item(root, word);
    }

}

void Binary_Tree::add_item(Node * node, String & word) //внутренний метод добавления элементов
{

    if(node->data == word)
    {
        node->counter++;
        return;
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

size_t Binary_Tree::SearchNode(Node * node, String & word)              //реализация
{
    if(node->data == word)
    {
        return node->counter;
    }

    if(word < node->data)
    {
        if(node->left != nullptr)
        {
            SearchNode(node->left, word);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(node->right != nullptr)
        {
            SearchNode(node->right, word);
        }
        else
        {
            return 0;
        }
    }
}

