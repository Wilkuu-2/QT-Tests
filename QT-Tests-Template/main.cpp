// -- C++ 
#include <iostream>
#include <string>
// -- QT 
#include <QCoreApplication>
#include <QTextStream>

std::string consoleTest(){ 
	std::string name {};
	std::cout << "What is your name? \n";
	std::getline(std::cin, name, '\n');
	std::cout << "\033[FWOW, " << name << ", you have such a nice name!\n\0"; 
	return name;
}

QString qtStreamTest(){
   //QT Streams! 
	QTextStream qin  (stdin);
	QTextStream qout (stdout);
	
	qout << "\rWhat is your last name? \n";
	qout.flush();
	QString name = qin.readLine();
	qout << "\033[FWOW, " << name << ", is such a nice surname as well!\n"; 
	return name;
}


int main(int argc, char **vargs){

	//Create the application object
	QCoreApplication app (argc,vargs);
	
	// ---- App Initialization
	auto name = consoleTest();
	auto surname = qtStreamTest();
	
	// ---- Exec Loop
	return app.exec();
}

 