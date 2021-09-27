#ifndef DBFACADE_H
#define DBFACADE_H

#include "dbfacade_int.h"

#include <QTableView>

template <typename T>
class DBFacade : public DBFacade_int
{
public:
    DBFacade(QTableView* tableview, QString db_path, QString table_name, QObject* parent);
    virtual ~DBFacade();
    virtual void addRecord (T m); // ТУТ ХЗ ПОКА // virtual void addRecord (TT_Dao m) override
    virtual void exec(QString w) override;
    QSqlTableModel* getMTableModel(){return mTableModel;}
protected:
    QTableView* mTableview;
    virtual void addRecord() override;
};







template<typename T>
DBFacade<T>::DBFacade(QTableView* tableview, QString db_path, QString table_name, QObject* parent)
{
    qDebug()<<"DBFacade child";
    //this->parent()->setParent(parent);

    mDB = QSqlDatabase::addDatabase("QSQLITE");//, "Timetable_db_connection");
    mDB.setDatabaseName(db_path);

    if (!mDB.open()) {
        qDebug()<<mDB.lastError();
        qDebug()<<"not open";
        throw "db" + db_path + "  " + table_name + "not opened";
        }
         mQuery = new QSqlQuery(mDB);
        //bool b = mDB.tables().contains();
                //.contains("Timetable");
        if (false == mDB.tables().contains(table_name))
            exec("CREATE TABLE seats ("  // таблица посадочных мест
              "carID INTEGER, " // серийный номер вагона
              "nseat INTEGER, " // номер посадочного места
              "PRIMARY KEY (carID, nseat)"
              ");"
          );

        mTableModel = new QSqlTableModel (this, mDB);
        mTableModel->setTable(table_name);
        mTableModel->select();
        mTableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
        mTableview = tableview;
        mTableview->setModel(mTableModel);


}
template<typename T>
void DBFacade<T>::exec(QString w){
    mQuery->clear();
    if (false == mQuery->exec(w))
      throw tr("DBFacade Error: can't exec : ") + w;
    mRec = mQuery->record();
}

template<typename T>
DBFacade<T>::~DBFacade()
{
    qDebug()<<"child destru";

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
