#ifndef DBFACADE_H
#define DBFACADE_H

#include "dbfacade_int.h"

#include <QTableView>

template <typename T>
class DBFacade : public DBFacade_int
{
public:
    DBFacade(QTableView* tableview);
    virtual ~DBFacade();
    virtual void addRecord (T m); // ТУТ ХЗ ПОКА // virtual void addRecord (TT_Dao m) override
protected:
    virtual void addRecord();



};







template<typename T>
DBFacade<T>::DBFacade(QTableView* timetable)
{
    qDebug()<<"DBFacade child";

}
template<typename T>
DBFacade<T>::~DBFacade()
{

    qDebug()<<"child dest";

}

template<typename T>
void DBFacade<T>::addRecord(T m)
{

}

template<typename T>
void DBFacade<T>::addRecord()
{

}

#endif // DBFACADE_H
