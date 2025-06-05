#include <QApplication>
#include <QWidget>
#include <QPainter>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(800, 600);
    window.setWindowTitle("Множество Кантора");

    window.show();
    return app.exec();
}
