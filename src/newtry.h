#ifndef NEWTRY_H
#define NEWTRY_H

#include <interfaces/iplugin.h>

class newTry : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    newTry(QObject* parent, const QVariantList& args);
};

#endif // NEWTRY_H
