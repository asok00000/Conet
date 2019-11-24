#ifndef COMPONENT_PLUGIN_H
#define COMPONENT_PLUGIN_H

#include <QQmlExtensionPlugin>

class ComponentPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // COMPONENT_PLUGIN_H
