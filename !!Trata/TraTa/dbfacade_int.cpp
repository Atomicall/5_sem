#include "dbfacade_int.h"

DBFacade_int::DBFacade_int(QObject* parent): QObject(parent) {
    qDebug()<<"DBFacade parent";
}

DBFacade_int::~DBFacade_int()
{
    qDebug()<<"parent dest";
    mDB.close();
    mDB.removeDatabase(mDB.connectionName());
    delete mQuery;
}

void DBFacade_int::exec(QString)
{

}

QString DBFacade_int::qs(QString)
{

}
