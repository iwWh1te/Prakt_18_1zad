#include <QtWidgets>

class MainWindow:public QMainWindow{
	public:
		MainWindow();
	private:
QLabel *xLabel, *yLabel;
};

MainWindow::MainWindow(){
	setWindowTitle("Mouse v0.2");
	setFixedSize(900,500);
	QFont labelFont("Courier",32,QFont::Bold);
	xLabel= new QLabel(this);
	xLabel->setGeometry(150,5,850,120);
	xLabel->setFont(labelFont);
	xLabel->setText("Mouse X:");
	yLabel= new QLabel(this);
	yLabel->setGeometry(150,125,850,120);
	yLabel->setFont(labelFont);
	yLabel->setText("Mouse Y:");
}

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
