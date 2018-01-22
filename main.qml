import QtQuick 2.10
import QtQuick.Controls 2.3

ApplicationWindow {
    //pal.setColor(QPalette::Background, Qt::black);
    //qApp->setStyleSheet("QLineEdit { background-color: yellow }");

    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Stack")

    header: ToolBar {
        contentHeight: toolButton.implicitHeight
    }
}
