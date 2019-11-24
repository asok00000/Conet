#ifndef MODEL_PLUGIN_H
#define MODEL_PLUGIN_H

#include <QQmlExtensionPlugin>

class ModelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // MODEL_PLUGIN_H
