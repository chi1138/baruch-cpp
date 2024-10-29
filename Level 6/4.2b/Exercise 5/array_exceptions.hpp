#ifndef ARRAY_EXCEPTIONS_HPP
#define ARRAY_EXCEPTIONS_HPP

class ArrayException {
public:
    virtual const char* what() const { return "Array Exception"; }
};

class OutOfBoundsException : public ArrayException {
private:
    int m_index;

public:
    OutOfBoundsException(int index) : m_index(index) {}

    const char* what() const override { return "Out of Bounds Exception"; }
    int Index() const { return m_index; }
};

#endif 
