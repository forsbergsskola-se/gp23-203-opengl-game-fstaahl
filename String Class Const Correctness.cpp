#include <iostream>

class String {
private:
    char* buffer;
    size_t length;
    const size_t maxSize; // maxSize is const

public:
    String(size_t maxSize) : length(0), maxSize(maxSize), buffer(new char[maxSize + 1])
    {
        std::cout << "Constructing an empty string." << std::endl;
        buffer[0] = '\0';
    }

    String(const char* defaultText, size_t maxSize) : length(0), maxSize(maxSize), buffer(new char[maxSize + 1])
    {
        std::cout << "Constructing a non-empty string" << std::endl;
        while (defaultText[length] != '\0' && length < maxSize)
        {
            buffer[length] = defaultText[length];
            ++length;
        }
        buffer[length] = '\0';
    }

    ~String()
    {
        std::cout << "Destructing string" << std::endl << buffer << std::endl;
        delete[] buffer;
    }

    void append(const char* text)
    {
        size_t textLength = 0;
        while (text[textLength] != '\0')
        {
            ++textLength;
        }

        if (length + textLength < maxSize)
        {
            for (size_t i = 0; i < textLength; ++i) {
                buffer[length++] = text[i];
            }
            buffer[length] = '\0';
        }
    }

    void appendLine(const char* text)
    {
        append(text);
        append("\n");
    }

    void print() const // print() can be const
    {
        std::cout << buffer << std::endl;
    }

    const char* getString() const // getString() can be const
    {
        return buffer;
    }
};
