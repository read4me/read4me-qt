#include "mainwindow.h"
#include <QDeclarativeView>

Q_INVOKABLE void Quit();

void Init();

void MainWindow::Quit(){
    QApplication::quit();
}

function callback(){
    window.Quit();
}

void MainWindow::Init(){
    // Caminha para a pasa de conteúdo
    QString contentPath;
    #ifdef QT_DEBUG
    // Na versão de depuração do projeto, este é o para a pasta do projeto
    contentPath = "/home/sobral/read4me";
    #else
    // Na versão de lançamento, este é o caminho para a pasta do aplicativo
    contentPath = QApplication::applicationDirPath();
    #endif
    setFocusPolicy(Qt::StrongFocus);
    //Muda o tamanho do documento QML para caber na janela principal
    setResizeMode(QDeclarativeView::SizeRootObjecttoView);
    // Carrega o arquivo QML
    setSource(QUrl::fromLocalFile(contentPath + "/main.qml"));

    rootContext()->setContextProperty("window",this);

}

MainWindow::MainWindow(QWidget *parent){
    Init();
}

MainWindow::~MainWindow(){
    delete ui;
}
