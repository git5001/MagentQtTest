#include "truck.h"

Truck::Truck(const QString &flavor)  :  QObject()
 {
	 m_flavor = flavor;
	  qDebug() << Q_FUNC_INFO << "m_flavor"<<m_flavor;
 }
 
 
 Truck::Truck()  :  QObject()
 {
	 m_flavor =  QString("DefXYZ");
	 qDebug() << Q_FUNC_INFO << "m_flavor"<<m_flavor;
 }

Truck::~Truck() {}

const QString Truck::getFlavor()
{
    return m_flavor;
}
