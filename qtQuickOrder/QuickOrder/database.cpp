#include "database.h"

Database::Database()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/Repositorios/QuickOrder/qtQuickOrder/QuickOrder/database/quickdb.db");

    if(!database.open())
    {
        std::cout << "Could not open database" << std::endl;
    }
    else
    {
        std::cout << "Success in opening database" << std::endl;
    }
}
