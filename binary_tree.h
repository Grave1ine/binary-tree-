#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <../../class_string/ClassString/MyString.h>
#include <cstdlib>


class Binary_Tree
{
private:
    struct Node                                   //узел
    {
        Node() = default;                         //т.к конструкторы уже есть объявляем конструктор по умолчанию с помощью default
        String data;                              //данные
        Node * right;                             //указатель на правую ветвь
        Node * left;                              //указатель на левую ветвь
        size_t counter;                           //хранит значение
        explicit Node(const String & word);       //конструктор инициализации
    };

    size_t size;                                  //кол во элементов в дереве (не нужно)
    void add_item(Node * node, String & word);    //добавление элемента в дерево???

public:
    Node * root;                                  //указатель на корень

    Binary_Tree();                                //конструктор класса инициализирующий указатели нулями

    ~Binary_Tree();                               //метод поиска

    void add(String & word);                      //метод добавления слова в дерево

    size_t SearchNode(Node * node ,String & word);//метод поиска

    size_t Get_size();

};

#endif // BINARY_TREE_H
