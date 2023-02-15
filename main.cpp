#include <QApplication>
#include <QPushButton>
#include <QIcon>

int main(int argc, char **argv){
    QApplication app(argc, argv);
    QPushButton button;
    QFont font("Courier");
    QIcon icon("C:/Users/ns/Desktop/Qt/FirstApp/logo.jpg");
    button.setText("Amazing, isn't it?");
    button.setToolTip("Not really");
    button.setFont(font);
    button.setIcon(icon);
    button.show();
    return app.exec();
}
