#include "newtry.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(newTryFactory, "newtry.json", registerPlugin<newTry>(); )

newTry::newTry(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("newtry"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_NEWTRY) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "newtry.moc"
