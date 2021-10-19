#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication2.h"

#include <QDebug>
#include <QRegExp>
#include <QMainWindow>
#include <QFileDialog>
#include <qtcpsocket.h>
#include <qgroupbox.h>
#include <QVBoxLayout>
#include <QLabel>
#include <qbuffer.h>


class QtWidgetsApplication2 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication2(QWidget *parent = Q_NULLPTR);
	void keyPressEvent(QKeyEvent *ev);
	QTcpSocket * socket;

private:
    Ui::QtWidgetsApplication2Class ui;

public slots:
	void onSocketConnected();
	void onSocketDisconnected();
};
