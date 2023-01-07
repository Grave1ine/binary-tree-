#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <../../class_string/ClassString/MyString.h>
#include <cstdlib>

struct Node                                  //узел
{
    String data;                             //данные
    Node * right;                            //указатель на правую ветвь
    Node * left;                             //указатель на левую ветвь
    size_t counter;                          //хранит значение
    explicit Node(String & word);            //конструктор инициализации
};

class Binary_Tree
{
private:
    Node * root;                            //указатель на корень
    size_t size;                            //кол во элементов в дереве
    void add(String & word);                //метод добавления слова в дерево
    void add_item(Node * node, String & word);          //добавление элемента в дерево???

public:
    Binary_Tree();                          //конструктор класса инициализирующий указатели нулями

    ~Binary_Tree();                         //метод поиска

    size_t search(String & word);           //метод поиска

    Node * Set_root(Node * node);

    size_t Get_size();

};

#endif // BINARY_TREE_H
