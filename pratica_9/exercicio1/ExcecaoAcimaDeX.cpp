#include <exception>
#include "ExcecaoAcimaDeX.h"

ExcecaoAcimaDeX::ExcecaoAcimaDeX()
{
}
const char *ExcecaoAcimaDeX::what() const noexcept
{
    return "Esse número excede o máximo permitido";
}
ExcecaoAcimaDeX::~ExcecaoAcimaDeX()
{
}
