#include "component_plugin.h"
#include "myitem.h"

#include <qqml.h>

void ComponentPlugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");
}

