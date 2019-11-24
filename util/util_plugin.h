#ifndef UTIL_PLUGIN_H
#define UTIL_PLUGIN_H

#include <QQmlExtensionPlugin>

class UtilPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // UTIL_PLUGIN_H
