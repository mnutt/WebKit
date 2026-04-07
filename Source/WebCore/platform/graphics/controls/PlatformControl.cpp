#include "config.h"
#include "PlatformControl.h"

#include "ControlPart.h"

namespace WebCore {

PlatformControl::PlatformControl(ControlPart& owningPart)
    : m_owningPart(owningPart)
{
}

} // namespace WebCore
