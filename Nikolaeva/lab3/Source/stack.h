#ifndef STACK_H
#define STACK_H

#include <QObject>
#include <vector>
#include <QDebug>
#include <string>


enum class optype {power = 3, multiply = 2, minus = 1, plus = 1, null = 0};


typedef std::pair<std::string, optype> Data;


class Stack : public QObject
{
    Q_OBJECT
public:
    explicit Stack(QObject *parent = nullptr);
    ~Stack() = default;

    Stack(const Stack&) = delete;
    Stack& operator=(const Stack&) = delete;

public slots:
    void push(const Data elem);
    void pop();
    Data top() const;
    size_t size() const;
    bool isEmpty() const;

private:
    std::vector <Data> stack;
    std::size_t sizeStack;
};

#endif // STACK_H
