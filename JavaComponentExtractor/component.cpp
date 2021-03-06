#include "component.h"

Component::Component(const TextLocation &location /*= TextLocation()*/)
{
    this->location = location;
}

bool Component::isNested(const Component &component)
{
    return
        location.firstLine > component.location.firstLine &&
        location.lastLine < component.location.lastLine
        ||
        location.firstLine >= component.location.firstLine &&
        location.lastLine <= component.location.lastLine &&
        location.firstColumn > component.location.firstColumn &&
        location.lastColumn < component.location.lastColumn;
}
