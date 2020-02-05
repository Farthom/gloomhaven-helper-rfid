#ifndef __ELEMENT_STATE_H__
#define __ELEMENT_STATE_H__

#include <vector>

#include "print.hpp"

namespace ghr
{
struct ElementStateNS
{
    enum Value{
        Inert,
        Strong,
        Waning,
    };
};

using ElementState = ElementStateNS::Value;

std::vector<ElementState> getElementStateValues()
{
    return {
        ElementState::Inert,
        ElementState::Strong,
        ElementState::Waning};
}

void print(const ElementState &arg)
{
    switch (arg)
    {
    case ElementState::Inert:
        ghr::print("Inert");
        break;
    case ElementState::Waning:
        ghr::print("Waning");
        break;
    case ElementState::Strong:
        ghr::print("Strong");
        break;
    }
}

} // namespace ghr

#endif // __ELEMENT_STATE_H__