#include <exception>

class ExcecaoAcimaDeX : public std::exception
{
public:
    ExcecaoAcimaDeX(/* args */);

public:
    virtual const char *what() const noexcept override;
    ~ExcecaoAcimaDeX();
};
