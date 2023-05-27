#include <QtWidgets>
int xMouse=0;
int yMouse=0;
int xGlobal=0;
int yGlobal=0;
class MainWindow:public QMainWindow{
	public:
		MainWindow();
		void mousePressEvent(QMouseEvent *event);
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

void MainWindow::mousePressEvent(QMouseEvent *event){
	QString strGlobalX,strX;
	xMouse=event->x();
	xGlobal=event->globalX();
	strX=QString::number(xMouse);
	strGlobalX=QString::number(xGlobal);
	xLabel->setText("Mouse X: "+strX+" [ "+strGlobalX+" ] ");
	
	QString strGlobalY,strY;
	yMouse=event->y();
	yGlobal=event->globalY();
	strY=QString::number(yMouse);
	strGlobalY=QString::number(yGlobal);
	yLabel->setText("Mouse Y: "+strY+" [ "+strGlobalY+" ] ");
}

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    MainWindow mainWin;
    mainWin.show();
    return app.exec();
}
