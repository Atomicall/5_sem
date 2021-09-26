#ifndef DBFACADE_INT_H
#define DBFACADE_INT_H


#include <QObject>
#include <QtSql/QtSql>

class DBFacade_int : public QObject
{
    Q_OBJECT
public:
    DBFacade_int( QObject* parent = nullptr);
    virtual ~DBFacade_int();
protected:
    void exec(QString); //!< пытается выполнить запрос
    QString qs(QString); //!< выделяет строку одинарными кавычками
    virtual void addRecord() = 0;

    QSqlDatabase mDB;  //!< база данных
    QSqlQuery* mQuery;  //!< запрос к базе
    QSqlRecord mRec; //!< строка таблицы (ответ на запрос)
    QSqlTableModel* mTableModel; //!< модель таблицы

};

#endif // DBFACADE_INT_H
