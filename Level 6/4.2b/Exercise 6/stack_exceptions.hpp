#ifndef STACK_EXCEPTIONS_HPP
#define STACK_EXCEPTIONS_HPP

class StackException {
public:
    virtual const char* what() const { return "Stack Exception"; }
};

class StackFullException : public StackException {
public:
    const char* what() const override { return "Stack is full"; }
};

class StackEmptyException : public StackException {
public:
    const char* what() const override { return "Stack is empty"; }
};

#endif
