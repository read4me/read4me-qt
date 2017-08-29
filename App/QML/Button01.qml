import QtQuick 2.0

Row {
    anchors.right: parent.right
    anchors.rightMargin: 4
    anchors.top: parent.top
    anchors.topMargin: 4
    spacing: 4

    WindowButton{
        id: exit
        source: "exit.png"
        function callback(){}
    }
}
