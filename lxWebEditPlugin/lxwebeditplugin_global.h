#ifndef LXWEBEDITPLUGIN_GLOBAL_H
#define LXWEBEDITPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef LXWEBEDITPLUGIN_LIB
# define LXWEBEDITPLUGIN_EXPORT Q_DECL_EXPORT
#else
# define LXWEBEDITPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // LXWEBEDITPLUGIN_GLOBAL_H