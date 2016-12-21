#ifndef CONNECTIONTHREAD_H
#define CONNECTIONTHREAD_H

#include <QThread>

class ConnectionThread : public QThread
{
    Q_OBJECT
public:
    explicit ConnectionThread(QObject *parent = 0);
    void run();
    ConnectionThread();
signals:
    void startConnection();
public slots:

};

#endif // CONNECTIONTHREAD_H
