#include <QWidget>
#include <QObject> 
#include <QLabel>

class MainWindow : public QWidget
{
	Q_OBJECT
	
private:
	QLabel *helloLabel;
public:
	MainWindow();
	~MainWindow();
	void setHelloNames(QString name, QString surn);


};