#include <exception>

class MyException: public std::exception{
    private:
  const char* m_message;
    public:
    MyException(const char* message): m_message(message){}
     virtual const char* what() const noexcept override {
        return m_message;
    }
};