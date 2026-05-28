#pragma once

// #include "qrkcore_global.h"

#include <QHash>
#include <QMap>
#include <QMutex>
#include <QSqlDatabase>

class QThread;

class DatabaseManager {
public:
  static QSqlDatabase database(const QString &connectionName = QLatin1String(
                                   QSqlDatabase::defaultConnection),
                               const QString dbName = nullptr);
  static void clear();
  static void removeCurrentThread(QString);
  // static QString DBName;

private:
  static QMutex s_databaseMutex;
  static QMap<QString, QMap<QString, QSqlDatabase>> s_instances;
};
