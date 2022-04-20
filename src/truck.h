#ifndef ICECREAM_H
#define ICECREAM_H

#include <string>

#include <QtCore/QtGlobal>
#include <QtCore/qglobal.h>
#include <QtCore/QString>
#include <QtCore/QObject>
#include <QtCore/QDebug>

// decl definitions for shared library compilation/usage:
#if defined(QT_STATIC_BUILD)
#  define QCP_LIB_DECL
#elif defined(QCUSTOMPLOT_COMPILE_LIBRARY)
#  define QCP_LIB_DECL Q_DECL_EXPORT
#elif defined(QCUSTOMPLOT_USE_LIBRARY)
#  define QCP_LIB_DECL Q_DECL_IMPORT
#else
#  define QCP_LIB_DECL
#endif

class QCP_LIB_DECL Truck : public QObject
{
	Q_OBJECT
	
public:
    Truck(const QString &flavor);
	Truck();
    virtual ~Truck();

    const QString getFlavor();

public:
    QString m_flavor;
};


#endif // ICECREAM_H