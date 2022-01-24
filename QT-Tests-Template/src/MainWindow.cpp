#include "MainWindow.hpp"
#include <QString> 

MainWindow::MainWindow()
{
	helloLabel = new QLabel("Hello",this);
	helloLabel->move(50,50);
}
void MainWindow::setHelloNames(QString name, QString surn){
	helloLabel->setText(QString("Hello, " + name +" "+ surn + ", how are you?"));
}

MainWindow::~MainWindow()
{
}

